// #include <stdio.h>
// #include <string.h>

// int main() {
//     char gram[20], part1[20], part2[20], modifiedGram[20], newGram[20];
//     int i, j = 0, k = 0, pos = 0;

//     printf("Enter the production: ");
//     fgets(gram, sizeof(gram), stdin);
//     gram[strcspn(gram, "\n")] = '\0';

//     for(i = 0; gram[i] != '|' && gram[i] != '\0'; i++, j++) {
//         part1[j] = gram[i];
//     }
//     part1[j] = '\0';
//     if(gram[i] == '|') {
//         i++;
//     }
//     for(j = 0; gram[i] != '\0'; i++, j++) {
//         part2[j] = gram[i];
//     }
//     part2[j] = '\0';
//     for(i = 0; part1[i] != '\0' && part2[i] != '\0'; i++) {
//         if(part1[i] == part2[i]) {
//             modifiedGram[k++] = part1[i];
//             pos = i + 1;
//         } else {
//             break;
//         }
//     }
//     modifiedGram[k] = 'X';
//     modifiedGram[++k] = '\0';

//     j = 0;
//     for(i = pos; part1[i] != '\0'; i++) {
//         newGram[j++] = part1[i];
//     }
//     if(j > 0) {
//         newGram[j++] = '|';
//     }
//     for(i = pos; part2[i] != '\0'; i++) {
//         newGram[j++] = part2[i];
//     }
//     newGram[j] = '\0';

//     printf("Grammar without left factoring: \n");
//     printf("A->%s\n", modifiedGram);
//     printf("X->%s\n", newGram);
//     return 0;
// }

#include <stdbool.h>
#include <stdio.h>

bool parse(char *);

int main() {
    char input[100];
    printf("Enter a string to parse: ");
    scanf_s("%99s", input);

    if(parse(input)) {
        printf("String is Successfully parsed\n");
    } else {
        printf("Error in parsing String\n");
    }
    return 0;
}

bool parse(char *input) {
    int i = 0;
    if(input[i++] == 'c' && input[i++] == 'a' && (input[i] == 'b' || input[i] == 'd') && (input[++i] == 'd' || input[i] == '\0')) {
        return true;
    }
    return true;
}
