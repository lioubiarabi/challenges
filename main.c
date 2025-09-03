#include <stdio.h>

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
    printf("--- adding book ---\n");
}

void deleteBook() {
    printf("--- adding book ---\n");
}
void update() {
    printf("--- adding book ---\n");
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
