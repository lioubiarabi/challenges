#include <stdio.h>
#include <string.h>

int playersNumber=0;
int playerId =1000; 
struct player {
    int id, numero,age, buts;
    char fullname[50], poste[50] ;
    };
    
struct player team[25];

struct player add() {
    char newName[50], newPoste[50];
    printf("-- Ajouter un nouveau joueur --\n");
    printf("Entrez le nom complet du joueur: ");
    getchar();
    scanf("%[^\n]",newName);
    strcpy(team[playersNumber].fullname, newName);
    printf("Entrez l'âge du joueur: ");
    scanf("%d", &team[playersNumber].age);
    printf("Enter le numeroMaillot: ");
    scanf("%d", &team[playersNumber].numero);
    getchar();
    printf("Enter poste: (gardien, défenseur, milieu, attaquant): ");
    scanf("%[^\n]", newPoste);
    strcpy(team[playersNumber].poste, newPoste);
    team[playersNumber].buts = 0;
    team[playersNumber].id = playerId;
    playerId++;
    playersNumber++;
    return team[playersNumber];
}

int affiche(){
    
}



int main() {
    int choose;
    while(choose!=7){
        printf("--- dashboard ---\n");
        printf("1. Ajouter un joueur\n");
        printf("1. Afficher la liste de tous les joueurs \n");
        printf("1. Modifier un joueur\n");
        printf("1. Supprimer un joueur\n");
        printf("1. Rechercher un joueur\n");
        printf("1. Statistiques \n");
        printf("7. Quitter\n");
        
        printf("Choisissez un numéro: ");
        scanf("%d",&choose);
        
        switch(choose){
            case 1:
                int newPlayersNum;
                printf("combien de joueurs voulez-vous: ");
                scanf("%d", &newPlayersNum);
                
                for(int i=0; i<newPlayersNum; i++){
                    struct player newPlayer = add();
                    printf("%s added successfuly! ID: %d\n", newPlayer.fullname, newPlayer.id );
                }
            break;
            case 2:
                affiche();
            break;
            case 7:
                break;
            break;
            default:
                printf("enter correct number!");
        }
    }
    
    
    
    return 0;
}