#include <stdio.h>

int main() {
    char arithmetic[] = {'+', '-', '*', '/', '%'};
    char relational[] = {'<', '>', '!', '='};
    char bitwise[] = {'&', '|', '^', '~'};

    char input[3];  // Increased size for proper input handling
    printf("Enter an operator: ");
    scanf("%2s", input);  // Limit input to avoid buffer overflow

    // Check for logical operators (&&, ||, !)
    if((input[0] == '&' && input[1] == '&') || (input[0] == '|' && input[1] == '|') || (input[0] == '!' && input[1] == '\0')) {
        printf("It is a Logical Operator.\n");
        return 0;
    }

    // Check for relational operators (<, >, <=, >=, ==, !=)
    for(int i = 0; i < 4; i++) {
        if(input[0] == relational[i] && (input[1] == '=' || input[1] == '\0')) {
            printf("It is a Relational Operator.\n");
            return 0;
        }
    }

    // Check for bitwise operators (&, |, ^, ~, <<, >>)
    for(int i = 0; i < 4; i++) {
        if((input[0] == bitwise[i] && input[1] == '\0') || ((input[0] == '<' || input[0] == '>') && input[1] == input[0])) {
            printf("It is a Bitwise Operator.\n");
            return 0;
        }
    }

    // Check for ternary operator (?:)
    if(input[0] == '?' && input[1] == ':') {
        printf("It is a Ternary Operator.\n");
        return 0;
    }

    // Check for arithmetic, assignment, and unary operators
    for(int i = 0; i < 5; i++) {
        if((input[0] == '+' || input[0] == '-') && input[1] == input[0]) {
            printf("It is a Unary Operator.\n");
            return 0;
        } else if((input[0] == arithmetic[i] && input[1] == '=') || (input[0] == '=' && input[1] == '\0')) {
            printf("It is an Assignment Operator.\n");
            return 0;
        } else if(input[0] == arithmetic[i] && input[1] == '\0') {
            printf("It is an Arithmetic Operator.\n");
            return 0;
        }
    }

    // If no valid operator is found
    printf("Invalid input or unsupported operator.\n");
    return 0;
}
