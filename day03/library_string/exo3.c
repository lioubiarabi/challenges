#include <stdio.h>
#include <string.h>

int main() {
    char str1[50]="Hello ";
    char str2[]="Ahmed";
    
    strcat(str1, str2);
    printf("the string: %s", str1);
    
    return 0;
}