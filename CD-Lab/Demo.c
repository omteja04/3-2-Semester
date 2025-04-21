

#include <stdio.h>
#include <string.h>
char input[16], stack[20], action[20];
int i = 0, j = 0, inputLength = 0;
void check() {
    for(int z = 0; z < inputLength; z++) {
        if(stack[z] == '4') {
            strcpy(action, "REDUCE TO E -> 4");
            stack[z] = 'E';
            stack[z + 1] = '\0';
            printf("%s\n$%s\t\t%s$\t\t", action, stack, input);
            return;
        }
    }
    for(int z = 0; z < inputLength - 2; z++) {
        if(stack[z] == '2' && stack[z + 1] == 'E' && stack[z + 2] == '2') {
            strcpy(action, "REDUCE TO E -> 2E2");
            stack[z] = 'E';
            stack[z + 1] = '\0';
            stack[z + 2] = '\0';
            printf("%s\n$%s\t\t%s$\t\t", action, stack, input);
            i -= 2;
            return;
        }
    }
    for(int z = 0; z < inputLength - 2; z++) {
        if(stack[z] == '3' && stack[z + 1] == 'E' && stack[z + 2] == '3') {
            strcpy(action, "REDUCE TO E -> 2E2");
            stack[z] = 'E';
            stack[z + 1] = '\0';
            stack[z + 2] = '\0';
            printf("%s\n$%s\t\t%s$\t\t", action, stack, input);
            i -= 2;
            return;
        }
    }
}

int main() {
    char str[50];
    printf("Consider CFG: \nE -> 4\nE->2E2\nE->3E3\n");
    printf("Enter the input string");
    scanf("%s", str);
    strcpy(input, str);
    inputLength = strlen(input);
    printf("Stack\t\tInput\t\tAction\n");
    printf("$\t\t%s$\t\t", input);
    for(i = 0, j = 0; j < inputLength; j++, i++) {
        strcpy(action, "SHIFT");
        stack[i] = input[j];
        input[j] = ' ';
        printf("%s\n$%s\t\t%s$\t\t", action, stack, input);
        check();
    }
    check();
    if(stack[0] == 'E' && stack[1] == '\0') {
        printf("ACCEPT");
    } else {
        printf("REJECT");
    }
}
