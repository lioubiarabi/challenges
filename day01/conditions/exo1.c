#include <stdio.h>

int main() {
    int n;
    printf("enter un nombre: ");
    scanf("%d", &n);
    if(n%2 == 0) printf("nombre pair");
    else printf("nombre impair");
    return 0;
}