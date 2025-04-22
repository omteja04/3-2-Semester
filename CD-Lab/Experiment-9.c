// LR Parsing Algorithm
// LR parsing is a bottom-up parser that reads input Left to right and produces a Rightmost derivation in reverse.
// It uses a stack and parsing table to shift input symbols and reduce them to grammar rules.

#include <stdio.h>
#include <string.h>

char input[16], stack[16], action[20];
int i = 0, j = 0, inputLength = 0;

void check() {
    // E -> 4
    for(int z = 0; z < inputLength; z++) {
        if(stack[z] == '4') {
            strcpy(action, "REDUCE TO E -> 4");
            stack[z] = 'E';
            stack[z + 1] = '\0';
            printf("%s\n$%s\t\t%s$\t", action, stack, input);
            return;
        }
    }

    // E -> 2 E 2
    for(int z = 0; z < inputLength - 2; z++) {
        if(stack[z] == '2' && stack[z + 1] == 'E' && stack[z + 2] == '2') {
            strcpy(action, "REDUCE TO E -> 2E2");
            stack[z] = 'E';
            stack[z + 1] = '\0';
            stack[z + 2] = '\0';
            printf("%s\n$%s\t\t%s$\t", action, stack, input);
            i -= 2;
            return;
        }
    }

    // E -> 3 E 3
    for(int z = 0; z < inputLength - 2; z++) {
        if(stack[z] == '3' && stack[z + 1] == 'E' && stack[z + 2] == '3') {
            strcpy(action, "REDUCE TO E -> 3E3");
            stack[z] = 'E';
            stack[z + 1] = '\0';
            stack[z + 2] = '\0';
            printf("%s\n$%s\t\t%s$\t", action, stack, input);
            i -= 2;
            return;
        }
    }
}

int main() {
    char str[50];

    printf("Consider the CFG:\nE -> 2E2\nE -> 3E3\nE -> 4\n");
    printf("\nEnter input string from the given CFG: ");
    scanf("%s", str);

    strcpy(input, str);
    inputLength = strlen(input);

    printf("\nStack\t\tInput\t\tAction");
    printf("\n$\t\t%s$\t", input);

    for(i = 0, j = 0; j < inputLength; i++, j++) {
        strcpy(action, "SHIFT");
        stack[i] = input[j];
        stack[i + 1] = '\0';
        input[j] = ' ';  // Mark as consumed
        printf("%s\n$%s\t\t%s$\t", action, stack, input);

        check();  // Check after each shift
    }

    check();  // Final check

    if(stack[0] == 'E' && stack[1] == '\0') {
        printf("Accept\n");
    } else {
        printf("Reject\n");
    }

    return 0;
}
