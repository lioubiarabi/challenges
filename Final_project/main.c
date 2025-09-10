#include <stdio.h>

struct player {
    int id, numero,age, buts;
    char nom[50],prenom[50], poste[50] ;
    };
    
struct player team[25];

int main() {
    int choose;
    while(choose!=7){
        printf("--- dashboard ---\n");
        printf("1. Ajouter un joueur\n");
        printf("1. Ajouter un joueur\n");
        printf("1. Ajouter un joueur\n");
        printf("1. Ajouter un joueur\n");
        printf("1. Ajouter un joueur\n");
        printf("1. Ajouter un joueur\n");
        printf("7. Quitter\n");
        
        printf("Choisissez un numéro: ");
        scanf("%d",&choose);
        
    }
    
    
    
    return 0;
}