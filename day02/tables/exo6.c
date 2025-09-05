#include <stdio.h>

int main() {
    int a, m;
    printf("enter the number of your elements: ");
    scanf("%d", &a);
    int arr[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &arr[i]);
    }
    printf("donner un facteur pou multuplier: ");
    scanf("%d", &m);
    printf("les resultas: \n");
    for(int i=0; i<a; i++){
        printf("%d * %d = %d\n", arr[i], m, arr[i]*m);
    }
    
    return 0;
}
