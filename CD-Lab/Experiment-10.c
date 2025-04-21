#include <stdio.h>

char stack[100], input[100];
int top = -1, ip = 0;

void printStatus(const char *action) {
    printf("$");
    for(int i = 0; i <= top; i++) {
        printf("%c", stack[i]);
    }
    printf("\t\t");
    for(int i = ip; input[i] != '\0'; i++) {
        printf("%c", input[i]);
    }
    printf("$\t\t%s\n", action);
}

void reduce() {
    while(1) {
        // E -> a / b
        if(top >= 0 && (stack[top] == 'a' || stack[top] == 'b')) {
            stack[top] = 'E';
            printStatus("REDUCE TO E -> a/b");
        }
        // E -> E op E
        else if(top >= 2 && stack[top - 2] == 'E' &&
                (stack[top - 1] == '+' || stack[top - 1] == '*' || stack[top - 1] == '/') &&
                stack[top] == 'E') {
            stack[top - 2] = 'E';
            top -= 2;
            printStatus("REDUCE TO E -> E op E");
        } else {
            break;
        }
    }
}

int main() {
    printf("Grammar:\nE -> E + E\nE -> E * E\nE -> E / E\nE -> a | b\n");
    printf("Enter the input string: ");
    scanf("%s", input);

    printf("\nInput String: %s\n", input);
    printf("\nStack\t\tInput\t\tAction\n");
    printf("$\t\t%s$\t\tInitial\n", input);

    while(input[ip] != '\0') {
        stack[++top] = input[ip++];
        printStatus("SHIFT");
        reduce();
    }

    reduce();  // Final reduce

    if(top == 0 && stack[0] == 'E') {
        printStatus("Accept");
    } else {
        printStatus("Reject");
    }

    return 0;
}
