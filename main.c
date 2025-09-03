#include <stdio.h>
#include <string.h>

char title[50][200];
char auteur[50][200];
int prix, quantite, n=0;

int show(){
    printf("--- showing book ---\n");
    if(n == 0) {
        printf("you don't have any books\n");
        return 0;
    }
    for(int i = 0; i<n; i++){
        printf("%s | %s | %d Dh | %d", title[i], auteur[i], prix[i], qhauntite[i]);
    }
    return 0;
}

void add() {
    printf("--- adding a new book ---\n");
    printf("enter the book's name: ");
    scanf("%99[^\n]", title[n]);
    printf("enter the book's writer name: ");
    scanf("%99[^\n]", auteur[n]);
    printf("enter the new book price: ");
    scanf("%d", &prix[n]);
    printf("enter the new book quantite: ");
    scanf("%d", &quantite[n]);
    printf("well done\n");
}

void deleteBook() {
    printf("--- delete a book ---\n");
    int choose;
    for(int i = 0; i<n; i++){
        printf("%d. %s", i+1, title[i] );
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
            printf("done");
            break;
        }
    }
}
void update() {
    printf("--- update books quantite ---\n");
    int choose;
    for(int i = 0; i<n; i++){
        printf("%d. %s", i+1, title[i] );
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
    printf("--- adding book ---\n");
}
void search() {
    printf("--- adding book ---\n");
}
void dashboard() {
    printf("--- dashboard ---\n");
}
int main() {
    
    return 0;
}
