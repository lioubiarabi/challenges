#include <stdio.h>

int main() {
    int a;
    printf("enter the number of your elements: ");
    scanf("%d", &a);
    int arr[a], arr2[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int j=a; j>=0; j--){
        arr2[j]=arr[a-j-1];
    }
    for(int k=0; k<a; k++){
        printf("%d de arr et %d de arr2\n",arr[k] , arr2[k]);
    }
    return 0;
}