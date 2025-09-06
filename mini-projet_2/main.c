#include <stdio.h>

void stringCopy(char *first, char *second){
    for (int i =0; second[i] != '\0' && second[i] != '\n'; i++){
        first[i] = second[i];
    }
}

int n=0;
struct contact {
        char name[50], email[50], number[50];
    };
struct contact contacts[123];
struct contact add() {
    char newName[50], newNumber[50], newEmail[50];
    struct contact newContact;
    printf("--adding new contact--\n");
    printf("enter the name: ");
    fgets(newName, 50, stdin);
    printf("enter the number: ");
    fgets(newNumber, 50, stdin);
    printf("enter the email: ");
    fgets(newEmail, 50, stdin);
    stringCopy(newContact.name, newName);
    stringCopy(newContact.number, newNumber);
    stringCopy(newContact.email, newEmail);
    contacts[n]=newContact;
    n++;
    return newContact;
}

int main() {
    int choose;
    while(1){
        printf("---dashboard---\n");
        printf("1. add new contact\n");
        printf("2. search a contact\n");
        printf("3. modify a contact\n");
        printf("4. delete a contact\n");
        printf("5.show all\n\n");
        printf("choose from the list: ");
        scanf("%d", &choose);
        getchar();
        switch(choose){
            case 1:
                struct contact newContact = add();
                printf("%s added with success\n\n", newContact.name);
            break;
            case 2:
            
            break;
            case 3:
            
            break;
            case 4:
            
            break;
            case 5:
            
            break;
            default: printf("choose a correct number!!!\n");
        }
    }
    
    return 0;
}
