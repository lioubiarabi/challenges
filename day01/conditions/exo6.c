#include <stdio.h>

int main() {
    int a;
    printf("enter la valeur a: ");
    scanf("%d", &a);
    if(a<0) printf("%d est negatif", a);
    else if(a>0) printf("%d est positif", a);
    else printf("%d est null", a);
    return 0;
}