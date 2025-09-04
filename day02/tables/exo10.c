#include <stdio.h>
int main() {
    int a, rech, trouve = 0;
    printf("enter the number of your elements: ");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("enter l'element a rechercher: ");
    scanf("%d", &rech);
    for(int i=0; i<a; i++){
        if(arr[i] == rech){
            printf("%d est dans les elements", rech);
            trouve++;
        }
    }
    if(trouve == 0){
        printf("%d n'est pas dans les elements", rech);
    }
}