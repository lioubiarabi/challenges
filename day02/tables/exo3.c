#include <stdio.h>

int main() {
    int a, b=0;
    printf("enter the number of your elements: ");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<a; i++){
        b += arr[i];
    }
    printf("the somme of the nummbers are %d", b);
    return 0;
}