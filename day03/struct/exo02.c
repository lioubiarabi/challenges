#include <stdio.h>

int main() {
    struct student {
        char nom[50] ;
        int notes[5];
    }
    student = {"arabi", {20, 20, 20, 20, 20}};
    printf("name: %s\n", student.nom);
    printf("les notes: \n");
    for(int i=0; i<5; i++){
        printf("%d\n", student.notes[i]);
    }
    return 0;
}
