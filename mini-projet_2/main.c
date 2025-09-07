#include <stdio.h>

void stringCopy(char *first, char *second){
    int i =0;
    for (i =0; second[i] != '\0' && second[i] != '\n'; i++){
        first[i] = second[i];
    }
    first[i] = '\0';
}
int identic(char *first, char *second){
    int i=0, j=0;
    while(first[i]!='\0'&&first[i]!='\n')i++;
    while(second[j]!='\0'&&second[j]!='\n')j++;
    if(i==j){
        for(int k=0; k<i; k++){
            if(first[k]!=second[k])return 0;
        }
        return 1;
    } else {
        return 0;
    }
}

int n=9;
struct contact {
        int id;
        char name[50],number[50], email[50];
    };
struct search {
    int number;
    struct contact results[123];
};
// temporary contacts for testing
struct contact contacts[123] = {
        {0,"lioubi arabi", "+212600000000", "lioubi@gmail.com"},
        {1, "oussama teammate", "+212600000000", "oussama@gmail.com"},
        {2, "Ayoub Ezzaim", "+212612345678", "ayoub.e@example.com"},
        {3, "Fatima Zahra", "+212687654321", "fatima.z@example.com"},
        {4, "Mohamed Amine", "+212655555555", "mohamed.a@example.com"},
        {5, "Sara El Fassi", "+212644444444", "sara.f@example.com"},
        {6, "Ayoub Ezzaim", "+212612zq678", "add.e@example.com"},
        {7, "Youssef Benani", "+212633333333", "youssef.b@example.com"},
        {8, "Khadija Alaoui", "+212622222222", "khadija.a@example.com"}
    };
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
    contacts[n].id = n;
    stringCopy(newContact.name, newName);
    stringCopy(newContact.number, newNumber);
    stringCopy(newContact.email, newEmail);
    contacts[n]=newContact;
    n++;
    return newContact;
}

int show() {
    
    printf("%-20s%-20s%-30s\n", "NAME", "NUMBER", "EMAIL");
    printf("-------------------------------------------------------------------\n");
    if(n==0){
        printf("you don't have any contacts\n\n");
        return 0;
    }
    for(int i = 0; i<n; i++){
        printf("%-20s%-20s%-30s\n", contacts[i].name, contacts[i].number, contacts[i].email);
    }
    printf("\n");
    return 1;
} 
struct search search(char *searchVal){
    struct search newSearch;
    int trouve =0;
    for(int i = 0; i<n; i++){
        if(identic(contacts[i].name, searchVal)){
            newSearch.results[trouve].id = contacts[i].id;
            stringCopy(newSearch.results[trouve].name, contacts[i].name);
            stringCopy(newSearch.results[trouve].number, contacts[i].number);
            stringCopy(newSearch.results[trouve].email, contacts[i].email);
            trouve++;
        }
    }
    newSearch.number=trouve;
    
    return newSearch;
    
}

struct contact modify(int i) {
    char newName[50], newNumber[50], newEmail[50];
    getchar();
    struct contact editContact;
    printf("enter the new name: ");
    fgets(newName, 50, stdin);
    printf("enter the new number: ");
    fgets(newNumber, 50, stdin);
    printf("enter the new email: ");
    fgets(newEmail, 50, stdin);
    editContact.id = i;
    stringCopy(editContact.name, newName);
    stringCopy(editContact.number, newNumber);
    stringCopy(editContact.email, newEmail);
    contacts[i]=editContact;
    
    return editContact;
}
struct contact deleteContact(int i){
    struct contact deleted = contacts[i];
    for(int j=i; j<n; j++){
        contacts[j]=contacts[j+1];
        contacts[j].id = j;
    }
    n--;
    return deleted;
}

int main() {
    int choose;
    char confirm;
    while(1){
        printf("---dashboard---\n");
        printf("1. add new contact\n");
        printf("2. search a contact\n");
        printf("3. modify a contact\n");
        printf("4. delete a contact\n");
        printf("5. show all\n\n");
        printf("choose from the list: ");
        scanf("%d", &choose);
        getchar();
        switch(choose){
            case 1:
                struct contact newContact = add();
                printf("%s added with success\n\n", newContact.name);
            break;
            case 2:
                char searchVal[50];
                printf("enter the search: ");
                fgets(searchVal, 50, stdin);
                struct search theSearch = search(searchVal);
                
                printf("\n%-20s%-20s%-30s\n", "NAME", "NUMBER", "EMAIL");
                printf("-------------------------------------------------------------------\n");
                for(int i = 0; i<theSearch.number; i++){
                    printf("%-20s%-20s%-30s\n", theSearch.results[i].name, theSearch.results[i].number, theSearch.results[i].email);
                }
                if(theSearch.number) printf("\nwe found %d related search\n\n", theSearch.number);
                else printf("we didn't found anything\n\n");
            break;
            case 3:
                char modifName[50];
                printf("enter a contact to modify: ");
                fgets(modifName, 50, stdin);
                struct search modiSearch = search(modifName);
                
                if (modiSearch.number == 0)printf("can't find the contact: %s", modifName);
                else if(modiSearch.number == 1){
                    int id=modiSearch.results[0].id;
                    printf("\n%-20s%-20s%-30s\n", "NAME", "NUMBER", "EMAIL");
                    printf("-------------------------------------------------------------------\n");
                    printf("%-20s%-20s%-30s\n", contacts[id].name, contacts[id].number, contacts[id].email);
                    printf("do you wanna edit this contact [y/n]: ");
                    scanf("%c", &confirm);
                    if(confirm=='y' || confirm=='Y'){
                        struct contact edit = modify(id);
                        printf("the contact edited with success as: %s\n", edit.name);
                    } else break;
                }
                else {
                    int choose;
                    printf("\n%-5s%-20s%-20s%-30s\n","ID", "NAME", "NUMBER", "EMAIL");
                    printf("-------------------------------------------------------------------\n");
                    for(int i=0; i<modiSearch.number; i++){
                    printf("%-5d%-20s%-20s%-30s\n", i+1, contacts[modiSearch.results[i].id].name, contacts[modiSearch.results[i].id].number, contacts[modiSearch.results[i].id].email);
                    }
                    
                    while(choose <1 || choose >modiSearch.number){
                        printf("choose one contact:");
                        scanf("%d", &choose);
                    }
                    struct contact edit = modify(modiSearch.results[choose-1].id);
                    printf("the contact edited with success as: %s\n", edit.name);
                }
                
                
            break;
            case 4:
            char DeleteName[50];
                printf("enter a contact to delete: ");
                fgets(DeleteName, 50, stdin);
                struct search DeleteSearch = search(DeleteName);
                
                if (DeleteSearch.number == 0)printf("can't find the contact: %s", DeleteName);
                else if(DeleteSearch.number == 1){
                    int id=DeleteSearch.results[0].id;
                    printf("\n%-20s%-20s%-30s\n", "NAME", "NUMBER", "EMAIL");
                    printf("-------------------------------------------------------------------\n");
                    printf("%-20s%-20s%-30s\n", contacts[id].name, contacts[id].number, contacts[id].email);
                    printf("do you wanna delete this contact [y/n]: ");
                    scanf("%c", &confirm);
                    if(confirm=='y' || confirm=='Y'){
                        struct contact deleted = deleteContact(id);
                        printf("%s deleted successfuly\n", deleted.name);
                    } else break;
                }
                else {
                    int choose;
                    printf("\n%-5s%-20s%-20s%-30s\n","ID", "NAME", "NUMBER", "EMAIL");
                    printf("-------------------------------------------------------------------\n");
                    for(int i=0; i<DeleteSearch.number; i++){
                    printf("%-5d%-20s%-20s%-30s\n", i+1, contacts[DeleteSearch.results[i].id].name, contacts[DeleteSearch.results[i].id].number, contacts[DeleteSearch.results[i].id].email);
                    }
                    
                    while(choose <1 || choose >DeleteSearch.number){
                        printf("choose one contact:");
                        scanf("%d", &choose);
                    }
                    struct contact deleted = deleteContact(DeleteSearch.results[choose-1].id);
                        printf("%s deleted successfuly\n", deleted.name);
                }
            
            break;
            case 5:
                show();
            break;
            default: printf("choose a correct number!!!\n");
        }
    }
    
    return 0;
}
