#include <stdio.h>

int main() {
    int a, t=0;
    printf("enter the number of your elements: ");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("les resultas: \n");
    for(int i=0; i<a; i++){
        if(arr[i]%2 ==0 ){
            printf("%d est un element pair\n", arr[i]);
            t++;
        }
    }
    if(!t){
        printf("toutes les elements est imapir");
    }
    
    return 0;
}
