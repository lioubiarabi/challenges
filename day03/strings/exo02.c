#include <stdio.h>

int main() {
    char str[100], longeur=0;
    printf("enter the string: ");
    fgets(str, sizeof(str), stdin);
    while(str[longeur] != "\0" && str[longeur] != '\n')longeur++;
    printf("la longeur est %d", longeur);
    return 0;
}
