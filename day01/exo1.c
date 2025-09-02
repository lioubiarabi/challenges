#include <stdio.h>

int main() {
    char nom[20], prenom[20], email[20],sexe[20];
    int age;
    printf("Enter votre nom: ");
    scanf("%s", nom);
    printf("Enter votre prenom: ");
    scanf("%s", prenom);
    printf("Enter votre email: ");
    scanf("%s", email);
    printf("Enter votre age: ");
    scanf("%d", &age);
    printf("Entrez votre sexe (homme/femme) : ");
    scanf("%s", sexe);
    
    printf("Bonjour %s %s,\nl'adresse email est: %s\nl'age: %d,\nsexe: %s.\n Bonne nuit", nom, prenom, email, age, sexe);

    return 0;
}