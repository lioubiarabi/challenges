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
            printf("done\n");
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
    printf("--- quanite of all the books ---\n");
    int totale=0;
    for(int i =0; i<n; i++){
        totale += quanite[i];
    }
    printf("we have %d books in the library\n", totale);
}
void search() {
    printf("--- search for a book ---\n");
    int result;
    char bookTitle;
    printf("enter the book title: ");
    scanf("%99[^\n]", bookTitle);
    for(int i ==0; i<n; i++){
        if(strcmp(title[i], bookTitle) == 0 ){
            result++;
            printf("%s | %s | %d Dh | %d", title[i], auteur[i], prix[i], qhauntite[i]);
        }
        printf("we found %d books related", result);
    }
}
void dashboard() {
    int choose;
    while(1){
        printf("\n--- dashboard ---\n");
        printf("1. show all the books");
        printf("2. add a new book");
        printf("3. search for a book");
        printf("4. update a book quantite");
        printf("5. the quantite of all books");
        printf("6. delete a book\n\n");
        printf("choose a number from the list: ");
        scanf("%d", &choose):
        switch(choose){
            case 1:
                show()
            break;
            case 2:
                add()
            break;
            case 3:
                search()
            break;
            case 4:
                update()
            break;
            case 5:
                quantite()
            break;
            case 6:
                deleteBook()
            break;
            default: printf("incorrect");
        }
    }

}
int main() {
    dashboard();
    return 0;
}
