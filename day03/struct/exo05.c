#include <stdio.h>
struct book {
        char titre[50] ;
        char auteur[50] ;
        int anne ;
    };
void stringCopy(char *first, char *second) {
    int i=0;
    while(second[i] != '\0' && second[i] != '\n') {
        first[i]=second[i];
        i++;
    }
}
struct book create(char newtitre[50], char newauteur[50], int newanne){
    struct book newbook;
    stringCopy(newbook.titre, newtitre);
    stringCopy(newbook.auteur, newauteur);
    newbook.anne = newanne;
    return newbook;
}
int main() {
    struct book mybook = create("book name", "arabi", 2025);
    printf("%s %s %d", mybook.titre, mybook.auteur, mybook.anne);
    
    return 0;
}
