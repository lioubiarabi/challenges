#include <stdio.h>
int cal( int a, int b) {
    return a * b;
}
int main() {
    struct xy {
        int longeur ;
        int largeur ;
    };
    struct xy rec;
    
    printf("entrer longeur: ");
    scanf("%d", &rec.longeur);
    printf("entrer largeur: ");
    scanf("%d", &rec.largeur);
    printf("l'aire de la rectangle est %d", cal(rec.longeur, rec.largeur));
    
    return 0;
}
