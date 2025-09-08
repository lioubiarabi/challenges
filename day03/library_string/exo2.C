#include <stdio.h>
#include <string.h>

int main() {
    char search[100];
    printf("enter the string: ");
    fgets(search, 100, stdin);
    printf("\nlongeur est: %d", strlen(search));
    return 0;
}
