#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

bool isDelimiter(char ch) {
    return strchr(" +-*/,;><=()[]{}", ch) != NULL;
}
bool isOperator(char ch) {
    return strchr("+-*/><=", ch) != NULL;
}
bool isKeyword(const char *str) {
    const char *keywords[] = {"if", "else", "while", "do", "break", "continue", "int", "float", "return", "char", "sizeof", "long", "short", "typedef", "switch", "void", "static", "struct", "goto"};
    size_t keywordCount = sizeof(keywords) / sizeof(keywords[0]);
    for(size_t i = 0; i < keywordCount; i++) {
        if(strcmp(str, keywords[i]) == 0) {
            return true;
        }
    }
    return false;
}
bool isInteger(const char *str) {
    if(str[0] == '\0') {
        return false;  // Empty string is not an integer
    }
    for(size_t i = 0; str[i]; i++) {
        if(!isdigit(str[i]) && !(i == 0 && str[i] == '-')) {
            return false;
        }
    }
    return true;
}
bool isRealNumber(const char *str) {
    if(str[0] == '\0') {
        return false;
    }
    bool hasDecimal = false;
    for(size_t i = 0; str[i]; i++) {
        if(str[i] == '.') {
            if(hasDecimal) {
                return false;  // Multiple decimal points
            }
            hasDecimal = true;
        } else if(!isdigit(str[i]) && !(i == 0 && str[i] == '-')) {
            return false;
        }
    }
    return hasDecimal;
}
bool validIdentifier(const char *str) {
    return str[0] != '\0' && !isdigit(str[0]) && !isDelimiter(str[0]);
}

void parse(const char *str) {
    size_t left = 0, right = 0, len = strlen(str);
    while(right <= len) {
        if(!isDelimiter(str[right])) {
            right++;
        } else {
            if(left != right) {
                size_t size = right - left;
                char *subStr = (char *) malloc(size + 1);
                if(subStr) {
                    strncpy(subStr, str + left, size);
                    subStr[size] = '\0';  // Null terminate the string

                    if(isKeyword(subStr)) {
                        printf("'%s' IS A KEYWORD\n", subStr);
                    } else if(isInteger(subStr)) {
                        printf("'%s' IS AN INTEGER\n", subStr);
                    } else if(isRealNumber(subStr)) {
                        printf("'%s' IS A REAL NUMBER\n", subStr);
                    } else if(validIdentifier(subStr)) {
                        printf("'%s' IS A VALID IDENTIFIER\n", subStr);
                    } else {
                        printf("'%s' IS NOT A VALID IDENTIFIER\n", subStr);
                    }
                    free(subStr);
                }
            }
            if(isOperator(str[right])) {
                printf("'%c' IS AN OPERATOR\n", str[right]);
            }
            left = ++right;
        }
    }
}

int main() {
    const char str[] = "int a = b + 1c;";
    parse(str);
    return 0;
}
