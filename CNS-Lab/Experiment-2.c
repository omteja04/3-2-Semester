#include <stdio.h>
#include <string.h>
int main() {
  char str[] = "Hello World";
  char str1[11], str2[11], str3[11];
  int i, len;
  len = strlen(str);
  strcpy(str2, str); // Copying str into str2
  // AND each character with 127
  for (i = 0; i < len; i++) {
    str1[i] = str[i] & 127;
    printf("%c", str1[i]);
  }
  printf("\n");
  // XOR each character with 127
  for (i = 0; i < len; i++) {
    str3[i] = str2[i] ^ 127;
    printf("%c", str3[i]);
  }
  printf("\n");
  return 0;
}