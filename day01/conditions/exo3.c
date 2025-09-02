#include <stdio.h>

int main() {
    int a, b;
    printf("enter la valeur a: ");
    scanf("%d", &a);
    printf("enter la valeur b: ");
    scanf("%d", &b);
    if(a == b) printf("le triple somme de a + b: %d", (a+b)*3);
    else printf("le somme de a + b: %d", a+b);
    return 0;
}