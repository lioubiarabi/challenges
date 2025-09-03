#include <stdio.h>
#include <string.h>

char title[50][200];
char auteur[50][200];
int prix[200], quantite[200], n=0;

int show(){
    printf("--- showing book ---\n");
    if(n == 0) {
        printf("you don't have any books\n");
        return 0;
    }
    for(int i = 0; i<n; i++){
        printf("title: %s | writer: %s | price: %d Dh | quantite: %d\n", title[i], auteur[i], prix[i], quantite[i]);
    }
    return 0;
}

void add() {
    printf("--- adding a new book ---\n");
    printf("enter the book's name: ");
    scanf("%s", title[n]);
    printf("enter the book's writer name: ");
    scanf("%s", auteur[n]);
    printf("enter the new book price: ");
    scanf("%d", &prix[n]);
    printf("enter the new book quantite: ");
    scanf("%d", &quantite[n]);
    n++;
    printf("well done\n");
}

void deleteBook() {
    printf("--- delete a book ---\n");
    int choose;
    for(int i = 0; i<n; i++){
        printf("%d. %s\n", i+1, title[i] );
    }
    printf("choose a number from the list: ");
    scanf("%d", &choose);
    while(1){
        if(choose<0 || choose>n){
            printf("incorrect");
            continue;
        } else {
            for(int j=choose-1; j<n; j++){
                strcpy(title[j], title[j+1]);
                strcpy(auteur[j], auteur[j+1]);
                prix[j] = prix[j+1];
                quantite[j] = quantite[j+1];
            }
            n--;
            printf("done\n");
            break;
        }
    }
}
void update() {
    printf("--- update books quantite ---\n");
    int choose;
    for(int i = 0; i<n; i++){
        printf("%d. %s\n", i+1, title[i] );
    }
    printf("choose a number from the list: ");
    scanf("%d", &choose);
    while(1){
        if(choose<0 || choose>n){
            printf("incorrect");
            continue;
        } else {
            printf("enter the new quantite: ");
            scanf("%d", &quantite[choose-1]);
            break;
        }
    }
}
void showQuantite() {
    printf("--- quanite of all the books ---\n");
    int totale=0;
    for(int i =0; i<n; i++){
        totale += quantite[i];
    }
    printf("we have %d books in the library\n", totale);
}
void search() {
    printf("--- search for a book ---\n");
    int result=0;
    char bookTitle[50];
    printf("enter the book title: ");
    scanf("%s", bookTitle);
    for(int i =0; i<n; i++){
        if(strcmp(title[i], bookTitle) == 0 ){
            result++;
            printf("title: %s | writer: %s | price: %d Dh | quantite: %d\n", title[i], auteur[i], prix[i], quantite[i]);
        }
        printf("\nwe found %d books related", result);
    }
}
void dashboard() {
    int choose;
    while(1){
        printf("\n--- dashboard ---\n");
        printf("1. show all the books\n");
        printf("2. add a new book\n");
        printf("3. search for a book\n");
        printf("4. update a book quantite\n");
        printf("5. the quantite of all books\n");
        printf("6. delete a book\n\n");
        printf("choose a number from the list: ");
        scanf("%d", &choose);
        switch(choose){
            case 1:
                show();
            break;
            case 2:
                add();
            break;
            case 3:
                search();
            break;
            case 4:
                update();
            break;
            case 5:
                showQuantite();
            break;
            case 6:
                deleteBook();
            break;
            default: printf("incorrect");
        }
    }

}
int main() {
    dashboard();
    return 0;
}
