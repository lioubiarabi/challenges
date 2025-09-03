#include <stdio.h>

int main() {
    int a, minIndex;
    printf("enter the number of your elements: ");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    int min = arr[0];
    int max = arr[0];
    for(int i=0; i<a; i++){
        min = arr[i];
        max = arr[i];
        for(int j=0; j<a; j++){
            if(arr[j]<min){ 
                min = arr[j];
                minIndex=j;
            }
            if(arr[j]> max) max = arr[j];
        }
        arr[minIndex]=max;
        printf("%d\n", min);
    }
    return 0;
}