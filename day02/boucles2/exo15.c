#include <stdio.h>

int main() {
    int choose, n=1;
    printf("enter a number: ");
    scanf("%d", &choose);
    int m = choose;
    for(int i=1; i<choose; i++){
        n*=m;
        m--;
    }
    printf("le factorielle de %d est %d", choose, n);
    return 0;
}
