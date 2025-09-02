#include <stdio.h>

int main() {
    int a,m,n=1;
    printf("enter la valeur a: ");
    scanf("%d", &a);
    m=a;
    for (int i =1; a>=1; i++){
        n *=i;
        a--;
    }
    printf("%d!= %d",m, n);
    return 0;
}