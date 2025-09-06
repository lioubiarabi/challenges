#include <stdio.h>

int main() {
    int a, r;
    printf("enter le nombre des elements: ");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("enter l'element %d: ", i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<a; i++){
        for(int j=0; j<a-i-1; j++){
            if(arr[j+1]<arr[j]){
                r=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=r;
            }
        }
    }
    printf("showing all the elements: \n");
    for(int i=0; i<a; i++){
        printf("%d\n", arr[i]);
    }
    return 0;
}
