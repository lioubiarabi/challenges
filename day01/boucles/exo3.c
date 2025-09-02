#include <stdio.h>

int main() {
    int a,m,n=0;
    printf("enter la valeur a: ");
    scanf("%d", &a);
    m=a;
    for (int i =0; a>=0; i++){
        n +=i;
        a--;
    }
    printf("0+1+2+....+%d= %d",m, n);
    return 0;
}