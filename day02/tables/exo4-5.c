#include <stdio.h>

int main() {
    int a;
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
        if(arr[i]<min) min = arr[i];
        if(arr[i]>max) max = arr[i];
    }
    printf("the min is %d\n", min);
    printf("the max is %d", max);
    return 0;
}
