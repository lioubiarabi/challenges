#include <stdio.h>

int main() {
    int a;
    float t=0;
    printf("enter the number of your elements: ");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    for(int i=0; i<a; i++){
        t += arr[i];
    }
    printf("le moyenne est: %.2f", t/a);
    
    return 0;
}
