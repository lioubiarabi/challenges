#include <stdio.h>

int main() {
    int a;
    printf("enter la valeur a: ");
    scanf("%d", &a);
    for (int i =0; i<=10; i++){
        printf("%d * %d = %d\n",a,i,a*i);
    }
    return 0;
}