#include <stdio.h>

int main() {
    int a, r, somme=0;
    printf("entrer le nombre du multiplication: ");
    scanf("%d", &a);
    printf("les resultas: \n");
    for(int i=1; i<=10; i++){
        printf("%d * %d = %d \n", a , i, a*i);
        somme += a*i;
    }
    printf("la somme des produits est: %d", somme);
    return 0;
}
