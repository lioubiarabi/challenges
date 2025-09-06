#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int a;
    printf("how many letters in the password: ");
    scanf("%d", &a);
    char password[a];
    char all[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    
    
    for(int i =0; i<a; i++){
        int rando = (rand() % 62) + 1;
        password[i]= all[rando];
    }
    
    printf("your password: %s", password);
    
}
