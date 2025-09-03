#include <stdio.h>

int main() {
    int a;
    printf("enter the number of element: ");
    scanf("%d", &a);
    char arr[a][50];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%s", arr[i]);
    }
    for(int i=0; i<a; i++){
        printf("%s\n ", arr[i]);
    }
    return 0;
}