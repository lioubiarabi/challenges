#include <stdio.h>
char *maj(char* str){
    for(int i =0; i<sizeof(str); i++){
        if(str[i] <= 122 && str[i] >= 97){
            str[i]=str[i]-32;
        }
    }
    return str;
}
int main() {
    char str[50];
    printf("enter the string: ");
    fgets(str, 50, stdin);
    printf("str e majiscule: %s", maj(str));
    return 0;
}
