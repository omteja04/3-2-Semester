#include <stdio.h>
#include <string.h>

#define MAX 20
int stack[MAX], top = -1;
int parse_table[5][6] = {
  {21, 0, 0, 21, 0, 0},
  {-2, 621, 0, 0, -2, -2},
  {43, 0, 0, 43, 0, 0},
  {-2, -2, 743, 0, -2, -2},
  {5, 0, 0, 809, 0, 0}};

void push(int item) {
    stack[++top] = item;
}
int pop() {
    return stack[top--];
}
char convert(int item) {
    return "EetTFi+*()$"[item];
}

int main() {
    char input[MAX];
    int ip[MAX], i = 0, j, a, b, t;
    printf("CFG for Predictive Parser:\nE -> E+T | T\nT -> T*F | F\nF -> (E) | i\n");
    printf("Enter input string ending with '$': ");
    scanf("%s", input);

    for(; input[i]; i++) {
        ip[i] = strchr("EetTFi+*()$", input[i]) - "EetTFi+*()$";
    }
    ip[i] = -1;
    push(10);
    push(0);

    printf("\n\tStack\t\tInput\n");
    for(i = 0;;) {
        printf("\t");
        for(j = 0; j <= top; j++) {
            printf("%c", convert(stack[j]));
        }
        printf("\t\t");
        for(j = i; ip[j] != -1; j++) {
            printf("%c", convert(ip[j]));
        }
        printf("\n");

        if(stack[top] == ip[i]) {
            if(ip[i] == 10) {
                printf("\tSUCCESS\n");
                return 0;
            }
            pop();
            i++;
        } else if(stack[top] < 5) {
            a = pop();
            b = ip[i] - 5;
            if(b < 0 || b >= 6 || !parse_table[a][b]) {
                printf("\tERROR\n");
                return 1;
            }
            for(t = parse_table[a][b]; t > 0; t /= 10) {
                push(t % 10);
            }
        } else {
            printf("\tERROR\n");
            return 1;
        }
    }
}
