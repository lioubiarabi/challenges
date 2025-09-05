#include <stdio.h>
int fac(int a){
    int b=1;
    for(int i=1; i<=a; i++){
        b *= i;
    }
    return b;
}
int main() {
    int e;
    printf("enter the element: ");
    scanf("%d", &e);
    printf("le fac de %d est: %d",e, fac(e));
    return 0;
}
