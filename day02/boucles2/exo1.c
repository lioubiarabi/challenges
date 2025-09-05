#include <stdio.h>

int main() {
    int a;
    printf("enter your number: ");
    scanf("%d", &a);
    for(int i = 10; i>0; i--){
        printf("%d * %d = %d\n", a,i,a*i);
    }
    
    return 0;
}
