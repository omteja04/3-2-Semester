// Shift Reduce Parser using Stack
// A shift-reduce parser uses a stack-based approach to parse input by shifting symbols and reducing when grammar rules match.
// It continues until the stack contains only the start symbol and the input is fully consumed.
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char input[20], stack[20];
int ip_ptr = 0, st_ptr = 0, len;

void reduce() {
    int reduced;

    do {
        reduced = 0;

        // Rule: E -> a or E -> b
        if(st_ptr >= 1 && (stack[st_ptr - 1] == 'a' || stack[st_ptr - 1] == 'b')) {
            char term = stack[st_ptr - 1];
            stack[st_ptr - 1] = 'E';
            printf("\n$%.*s\t\t%s$\t\t\tE -> %c", st_ptr, stack, input + ip_ptr, term);
            reduced = 1;
        }

        // Rule: E -> E + E or E * E or E / E
        else if(st_ptr >= 3 &&
                stack[st_ptr - 3] == 'E' &&
                (stack[st_ptr - 2] == '+' || stack[st_ptr - 2] == '*' || stack[st_ptr - 2] == '/') &&
                stack[st_ptr - 1] == 'E') {

            char op = stack[st_ptr - 2];
            stack[st_ptr - 3] = 'E';
            st_ptr -= 2;
            stack[st_ptr] = '\0';

            printf("\n$%.*s\t\t%s$\t\t\tE -> E%cE", st_ptr, stack, input + ip_ptr, op);
            reduced = 1;
        }

    } while(reduced);

    // Accept condition
    if(stack[0] == 'E' && st_ptr == 1 && ip_ptr == len) {
        printf("\n$%.*s\t\t%s$\t\t\tAccept", st_ptr, stack, input + ip_ptr);
        exit(0);
    }
}

int main() {
    printf("\n\tShift Reduce Parser\n");
    printf("Grammar:\nE -> E + E\nE -> E * E\nE -> E / E\nE -> a | b\n");

    printf("\nEnter the input string: ");
    scanf("%s", input);
    len = strlen(input);

    printf("\n\tStack\t\tInput\t\tAction");
    printf("\n\t$\t\t%s$\t\t--", input);

    while(ip_ptr < len) {
        char symbol = input[ip_ptr++];
        stack[st_ptr++] = symbol;
        stack[st_ptr] = '\0';

        printf("\n$%s\t\t%s$\t\t\tshift %c", stack, input + ip_ptr, symbol);

        reduce();
    }

    reduce();  // Final check after input consumed

    // Reject if not accepted yet
    printf("\n$%s\t\t%s$\t\t\tReject", stack, input + ip_ptr);
    return 0;
}
