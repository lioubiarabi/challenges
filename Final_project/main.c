#include <stdio.h>
#include <string.h>

int playersNumber=5;
int playerId =1000; 
struct player {
    int id;
    char fullname[50];
    int age;
    int numero;
    char poste[50] ;
    int buts;
    };
    
struct player team[25]={{1000, "Messi Lionel", 38, 10, "Attaquant", 823},
        {1001, "Ronaldo Cristiano", 39, 7, "Attaquant", 895},
        {1002, "Neymar Jr.", 32, 11, "Milieu offensif", 439},
        {1003, "Mbappe Kylian", 25, 7, "Attaquant", 313},
        {1004, "Haaland Erling", 24, 9, "Attaquant", 267}};

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
    printf("--- showing all the players ---\n\n");
    printf("%-10s%-25s%-10s%-10s%-10s\n", "ID", "Full Name", "Age", "Poste", "Buts");
    printf("----------------------------------------------------------------\n");
    for(int i=0; i<playersNumber; i++){
        printf("%-10d%-25s%-10d%-10s%-10d\n", team[i].id, team[i].fullname, team[i].age, team[i].poste, team[i].buts);
    }
}



int main() {
    int choose;
    while(choose!=7){
        printf("--- dashboard ---\n");
        printf("1. Ajouter un joueur\n");
        printf("2. Afficher la liste de tous les joueurs \n");
        printf("3. Modifier un joueur\n");
        printf("4. Supprimer un joueur\n");
        printf("5. Rechercher un joueur\n");
        printf("6. Statistiques \n");
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