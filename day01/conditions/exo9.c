#include <stdio.h>

int main() {
    char c;
  printf("entrer the char: ");
    scanf(" %c", &c);

    if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z')) {
        printf("Alphabet\n");
        if (c >= 'A' && c <= 'Z') {
            printf("Majuscule\n");
        } else {
            printf("Minuscule\n");
        }
    } else {
        printf("Non alphabet\n");
    }

    return 0;
}
