#include <stdio.h>

int main() {
    int nombre, inverse;
    int c1, c2, c3, c4;

    printf("Entrez un nombre entier a quatre chiffres : ");
    scanf("%d", &nombre);
    c1 = nombre / 1000;
    c2 = (nombre / 100) % 10;
    c3 = (nombre / 10) % 10;
    c4 = nombre % 10;
    inverse = c4 * 1000 + c3 * 100 + c2 * 10 + c1;

    printf("Le nombre inverse est : %d\n", inverse);

    return 0;
}