#include <stdio.h>

int main() {
    float kmh;
    float ms;

    printf("Entrez la vitesse en kilometres par heure (km/h) : ");
    scanf("%f", &kmh);

    ms = kmh * 0.27778;

    printf("La vitesse en metres par seconde est : %.2f m/s\n", ms);

    return 0;
}