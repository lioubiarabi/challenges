#include <stdio.h>

int main() {
    int a;
    printf("trouver tous les nombre premiers a: ");
    scanf("%d", &a);
    for(int i = 1; i<=a; i++){
        int p = 0;
        for(int j=2; j<i; j++){
            if(i%j==0){
                p++;
                break;
            }
        }
        if(!p){
            printf("%d est premier\n", i);
        }
    }
    
    return 0;
}
