#include <stdio.h>

int main() {
    float avg;
    printf("entrer the average: ");
    scanf("%f", &avg);

    if (avg < 10) {
        printf("Recalé\n");
    } else if (avg < 12) {
        printf("Passable\n");
    } else if (avg < 14) {
        printf("Assez Bien\n");
    } else if (avg < 16) {
        printf("Bien\n");
    } else {
        printf("Très Bien\n");
    }

    return 0;
}
