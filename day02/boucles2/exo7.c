#include <stdio.h>

int main() {
    int a;
    printf("enter un nombre: ");
    scanf("%d", &a);
    printf("les facteurs de %d: \n",a);
    for(int i=1; i<a; i++){
        if(a%i == 0){
            printf("%d\n", i);
        }
    }
    
    return 0;
}
