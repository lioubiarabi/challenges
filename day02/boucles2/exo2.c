#include <stdio.h>

int main() {
    int a, e=0;
    printf("how many lines do you want: ");
    scanf("%d", &a);
    for(int i = a; i>0; i--){
        for(int j = 0; j<i; j++){
            printf(" ");
        }
        for(int k=0; k<(e*2)+1; k++){
            printf("*");
        }
        printf("\n");
        e++;
        
    }
    
    return 0;
}
