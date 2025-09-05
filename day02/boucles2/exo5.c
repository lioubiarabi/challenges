#include <stdio.h>

int main() {
    int a, sam=0;
    printf("trouver tous les nombre premiers a: ");
    scanf("%d", &a);
    for(int i=1; i<=a; i++){
        sam+=i;
    }
    printf("the sam of 1+2+...+%d is %d",a, sam);
    
    return 0;
}
