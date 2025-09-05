#include <stdio.h>

void inverse(char *phrase) {
    int longeur=0;
    while(phrase[longeur] != '\0'){
        longeur++;
    }
    char copy[longeur];
    for(int i=0; i<longeur-1; i++){
        copy[i]=phrase[i];
    }
    int j=0;
    for(int i=longeur-1; i>=0; i--){
        phrase[i]=copy[j];
        j++;
    }
    
    printf("your reversed phrase: %s", phrase);
    
    
}
int main() {
    char phrase[50];
    printf("enter your phrase: ");
    fgets(phrase, sizeof(phrase), stdin);
    inverse(phrase);
    
    return 0;
}
