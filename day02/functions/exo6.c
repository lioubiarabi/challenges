#include <stdio.h>

int fib(int n) {
    if (n <= 1) {
        return n;
    } else {
        return fib(n - 1) + fib(n - 2);
    }
}

int main() {
    int n, resultat;

    printf("Entrer n pour la suite de Fibonacci : ");
    scanf("%d", &n);

    if (n < 0) {
        printf("enter un nombre positif.\n");
    } else {
        resultat = fib(n);
        printf("Le terme %d de la suite de Fibonacci est : %d\n", n, resultat);
    }

    return 0;
}
