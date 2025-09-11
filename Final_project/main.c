#include <stdio.h>
#include <string.h>

int playersNumber=5;
int playerId =1005; 

struct player {
    int id;
    char fullname[50];
    int age;
    int numero;
    char poste[50] ;
    int buts;
    };

struct search {
    int indices[25];
    int count;
};
    
struct player team[25]={{1000, "Messi Lionel", 38, 10, "Attaquant", 823},
        {1001, "Ronaldo Cristiano", 39, 7, "Attaquant", 895},
        {1002, "Neymar Jr.", 32, 11, "Milieu ", 439},
        {1003, "Mbappe Kylian", 25, 7, "Attaquant", 313},
        {1004, "Haaland Erling", 24, 9, "Attaquant", 267}};

struct player add() {
    char newName[50];
    int newPoste;
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
    printf("\n1. gardien\n2. défenseur\n3. milieu\n4. attaquant \n ");
    
    while(newPoste>4 || newPoste <1){
        printf("Choose a number: ");
        scanf("%d", &newPoste);
    }
    switch(newPoste){
        case 1:
            strcpy(team[playersNumber].poste, "gardien");
        break;
        case 2:
            strcpy(team[playersNumber].poste, "defenseur");
        break;
        case 3:
            strcpy(team[playersNumber].poste, "milieu");
        break;
        case 4:
            strcpy(team[playersNumber].poste, "attaquant");
        break;
        
    }
    
    printf("Enter all the player buts: ");
    scanf("%d", &team[playersNumber].buts);
    
    team[playersNumber].id = playerId;
    playerId++;
    playersNumber++;
    return team[playersNumber-1];
}

int affiche(){
    printf("--- showing all the players ---\n\n");
    printf("%-10s%-25s%-10s%-15s%-10s\n", "ID", "Full Name", "Age", "Poste", "Buts");
    printf("----------------------------------------------------------------\n");
    for(int i=0; i<playersNumber; i++){
        printf("%-10d%-25s%-10d%-15s%-10d\n", team[i].id, team[i].fullname, team[i].age, team[i].poste, team[i].buts);
    }
    return 0;
}

struct search search_by_name(char *keyword){
    struct search newSearch;
    int counter =0;
    for(int i=0; i<playersNumber; i++)
        if(strstr(team[i].fullname, keyword) != 0){
            newSearch.indices[counter]=i;
            counter++;
        }
        newSearch.count = counter;

        return newSearch;
}

int search_by_id(int target){
    for(int i=0; i<playersNumber; i++)
        if(team[i].id == target)
            return i;
    return -1;
}


int main() {
    int choose =0;
    while(choose!=7){
        printf("--- dashboard ---\n");
        printf("1. Ajouter un joueur\n");
        printf("2. Afficher la liste de tous les joueurs \n");
        printf("3. Modifier un joueur\n");
        printf("4. Supprimer un joueur\n");
        printf("5. Rechercher un joueur\n");
        printf("6. Statistiques \n");
        printf("7. Quitter\n");
        
        printf("Choisissez un numero: ");
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
            case 3:
                
            break;
            case 4:

            break;
            case 5:
                int chooseSearch = 0;
                printf("-- Search for a player --\n");
                printf("1. search by name\n2. search by ID\n choose a number: ");
                scanf("%d", &chooseSearch);
                switch (chooseSearch)
                {
                case 1:
                    char keyword[50];
                    int playerIndex;
                    
                    printf("enter the player name: ");
                    getchar();
                    scanf("%[^\n]", keyword);
                    struct search newSearch = search_by_name(keyword);
                    if(newSearch.count== 0) printf("There's no search releted to %s\n\n", keyword);
                    else {
                        printf("\n%-10s%-25s%-10s%-15s%-10s\n", "ID", "Full Name", "Age", "Poste", "Buts");
                        printf("----------------------------------------------------------------\n");
                        for(int i = 0; i < newSearch.count; i++){
                            playerIndex = newSearch.indices[i];
                            printf("%-10d%-25s%-10d%-15s%-10d\n", team[playerIndex].id, team[playerIndex].fullname, team[playerIndex].age, team[playerIndex].poste, team[playerIndex].buts);
                        }
                        printf("\n%d search results relted\n\n", newSearch.count);
                    }
                    break;
                case 2:
                    int targetId;
                    printf("entre the player id: ");
                    scanf("%d", &targetId);
                    int targetIndex = search_by_id(targetId);
                    if(targetIndex == -1) printf("can't find the player by id");
                    else {
                        printf("\n%-10s%-25s%-10s%-15s%-10s\n", "ID", "Full Name", "Age", "Poste", "Buts");
                        printf("----------------------------------------------------------------\n");
                        printf("%-10d%-25s%-10d%-15s%-10d\n", team[targetIndex].id, team[targetIndex].fullname, team[targetIndex].age, team[targetIndex].poste, team[targetIndex].buts);
                    }
                    printf("\n");

                    break;
                
                default:
                printf("you didn't choose the correct number!\n");
                    break;
                }
                
            break;
            case 6:

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