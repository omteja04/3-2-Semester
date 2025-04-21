#include <stdio.h>
#define SUCCESS 1
#define FAILED  0

int E(), Edash(), T(), Tdash(), F();
const char *cursor;
char string[64];

int main() {
    printf("CFG for Recursive Descent Parser:\nE -> T E'\nE' -> + T E' | e\nT -> F T'\nT' -> * F T' | e\nF -> ( E ) | i\nEnter the string: ");
    scanf("%s", string);
    cursor = string;
    printf("\nInput      Action\n--------------------------------\n");

    if(E() && *cursor == '\0') {
        printf("--------------------------------\nString successfully parsed\n");
    } else {
        printf("--------------------------------\nError in parsing string\n");
    }

    return 0;
}

int E() {
    printf("%-16s E -> T E'\n", cursor);
    return T() && Edash();
}

int Edash() {
    if(*cursor == '+') {
        printf("%-16s E' -> + T E'\n", cursor);
        return ++cursor, T() && Edash();
    }
    printf("%-16s E' -> $\n", cursor);
    return SUCCESS;
}

int T() {
    printf("%-16s T -> F T'\n", cursor);
    return F() && Tdash();
}

int Tdash() {
    if(*cursor == '*') {
        printf("%-16s T' -> * F T'\n", cursor);
        return ++cursor, F() && Tdash();
    }
    printf("%-16s T' -> $\n", cursor);
    return SUCCESS;
}

int F() {
    if(*cursor == '(') {
        printf("%-16s F -> ( E )\n", cursor);
        return ++cursor, E() && *cursor == ')' ? ++cursor, SUCCESS : FAILED;
    }
    if(*cursor == 'i') {
        printf("%-16s F -> i\n", ++cursor);
        return SUCCESS;
    }
    return FAILED;
}
