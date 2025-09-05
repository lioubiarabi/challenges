#include <stdio.h>

int main() {
    int a, t1=0, t2=1, t;
    printf("nombre de termes de la suite de Fibonacci: ");
    scanf("%d", &a);
    printf("0\n1\n");
    for(int i=2; i<=a; i++){
        t=t1+t2;
        t1=t2;
        t2=t;
        printf("%d\n", t);
    }
    
    return 0;
}
