#include <stdio.h>

void stringCopy(char *first, char *second){
    for (int i =0; second[i] != '\0' && second[i] != '\n'; i++){
        first[i] = second[i];
    }
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
        char name[50],number[50], email[50];
    };
struct search {
    int number;
    struct contact results[123];
};
// temporary contacts for testing
struct contact contacts[123] = {
        {"lioubi arabi", "+212600000000", "lioubi@gmail.com"},
        {"oussama teammate", "+212600000000", "oussama@gmail.com"},
        {"Ayoub Ezzaim", "+212612345678", "ayoub.e@example.com"},
        {"Fatima Zahra", "+212687654321", "fatima.z@example.com"},
        {"Mohamed Amine", "+212655555555", "mohamed.a@example.com"},
        {"Sara El Fassi", "+212644444444", "sara.f@example.com"},
        {"Ayoub Ezzaim", "+212612zq678", "add.e@example.com"},
        {"Youssef Benani", "+212633333333", "youssef.b@example.com"},
        {"Khadija Alaoui", "+212622222222", "khadija.a@example.com"}
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
            stringCopy(newSearch.results[trouve].name, contacts[i].name);
            stringCopy(newSearch.results[trouve].number, contacts[i].number);
            stringCopy(newSearch.results[trouve].email, contacts[i].email);
            trouve++;
        }
    }
    newSearch.number=trouve;
    
    return newSearch;
    
}

int main() {
    int choose;
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
            
            break;
            case 4:
            
            break;
            case 5:
                show();
            break;
            default: printf("choose a correct number!!!\n");
        }
    }
    
    return 0;
}
