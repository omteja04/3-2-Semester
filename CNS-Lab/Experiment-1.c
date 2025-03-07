#include <stdio.h>
int main() {
  char *str = "Hello World";
  printf("Original String: %s\n", str);
  printf("XOR with 0 result: ");
  for (int i = 0;str[i] != '\0'; i++) {
    char result = str[i] ^ 0;
    printf("%c", result);
  }
  printf("\n");
  return 0;
}