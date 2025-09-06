#include <stdio.h>

int main() {
    int a, b;
    printf("entrer un nombre: ");
    scanf("%d", &a);
    printf("entrer une puissance: ");
    scanf("%d", &b);
    b--;
    while(b){
        a *=a;
        b--;
    }
    printf("le resultas est %d", a);
    return 0;
}
