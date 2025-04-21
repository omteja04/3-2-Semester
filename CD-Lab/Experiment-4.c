#include <stdbool.h>
#include <stdio.h>

bool parse(char *);

int main() {
    char input[100];

    printf("Enter a string to parse: ");
    scanf_s("%99s", input);

    if(parse(input)) {
        printf("String is successfully parsed.\n");
    } else {
        printf("Error in parsing string.\n");
    }

    return 0;
}

bool parse(char *input) {
    int index = 0;

    if(input[index] == 'c') {
        index++;
        if(input[index] == 'a') {
            index++;
            if(input[index] == 'b' || input[index] == 'd') {
                index++;
                if(input[index] == 'd' || input[index] == '\0') {
                    return true;
                }
            }
        }
    }
    return false;
}
