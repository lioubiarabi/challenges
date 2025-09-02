
int main() {
    float celsius;

    printf("Entrez la temperature en Celsius : ");
    scanf("%f", &celsius);

    if (celsius < 0) {
        printf("L'eau est a l'etat solide.\n");
    } else if (celsius >= 0 && celsius < 100) {
        printf("L'eau est a l'etat liquide.\n");
    } else {
        printf("L'eau est a l'etat gazeux.\n");
    }

    return 0;
}