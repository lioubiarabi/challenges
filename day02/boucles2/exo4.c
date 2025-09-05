#include <stdio.h>

int main() {
    int a, inverse=0;
    printf("trouver tous les nombre premiers a: ");
    scanf("%d", &a);
    while(a!=0){
        inverse = inverse*10+a%10;
        a /= 10;
    }
    printf("l'inverse est %d", inverse);
    
    return 0;
}
