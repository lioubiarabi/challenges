#include <stdio.h>
int min(int a, int b){
    if(a>b){
        return b;
    }
    else {
        return a;
    }
}
int main() {
    int e1, e2;
    printf("enter e1: ");
    scanf("%d", &e1);
    printf("enter e2: ");
    scanf("%d", &e2);
    printf("le min est: %d", min(e1, e2));
    return 0;
}
