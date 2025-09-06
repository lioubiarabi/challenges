#include <stdio.h>

int main() {
    int a, somme=0, n=0 ;
    
    printf("enter series des nombres positif terminer par 0:\n");
    while(1){
        scanf("%d", &a);
        if(a == 0) break;
        else if(a>0){
            somme += a;
            n++;
        } else{
            printf("enter un nombre postif\n");
        }
    }
    printf("le moyenne est: %.2f", (float)somme/n);
}
