#include <stdio.h>

int main() {
    struct person {
        char nom[50] ;
        char prenom[50]  ;
        int age;
    }
    person = {"arabi","loubi", 19};
    printf("%s %s %d", person.nom, person.prenom, person.age);
    return 0;
}
