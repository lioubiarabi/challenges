#include <stdio.h>

int parite(int a) {
    if(a%2 == 0){
        return 1;
    }
    else {
        return 0;
    }
}
int main() {
    int a;
    printf("enter your number: ");
    scanf("%d", &a);
    if(parite(a)){
        printf("%d est pair", a);
    } else {
        printf("%d est impair", a);
    }
    
    return 0;
}
