#include <stdio.h>

int main() {
    char c;
    printf("entrer un char: ");
    scanf(" %c", &c);
    if (c >= 65 && c <= 90) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}
