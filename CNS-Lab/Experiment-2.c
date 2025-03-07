#include <stdio.h>
int main() {
    char *str = "Hello World";  
    printf("Original String: %s\n\n", str);

    printf("AND with 127 result: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char andRes = str[i] & 127;  
        printf("%c", andRes);
    }
    printf("\n");

    printf("XOR with 127 result: ");
    for (int i = 0; str[i] != '\0'; i++) {
        char xorRes = str[i] ^ 127;  
        printf("%c", xorRes);
    }
    printf("\n");

    return 0;
}
