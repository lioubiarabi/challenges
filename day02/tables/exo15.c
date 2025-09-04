#include <stdio.h>
int main() {
    int a,b;
    printf("how many element in table 1 : ");
    scanf("%d", &a);
    int array1[a];
    for(int i=0; i<a; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &array1[i]);
    }
    printf("how many element in table 2 : ");
    scanf("%d", &b);
    int array2[b];
    for(int i=0; i<b; i++){
        printf("enter the element number %d: ",i+1);
        scanf("%d", &array2[i]);
    }
    int fusion[a+b];
    for(int i =0; i<a+b; i++) {
        for(int i=0; i<a; i++){
            fusion[i]= array1[i];
        }
        for(int i=0; i<b; i++){
            fusion[a+i]= array2[i];
        }
    }
    printf("showing the elements of the fusion table: \n");
    for(int i=0; i<a+b; i++){
        printf("%d\n", fusion[i]);
    }
    
    
}