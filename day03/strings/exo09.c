#include <stdio.h>
char *min(char* str){
    for(int i =0; str[i]!='\0'; i++){
        if(str[i] == ' ') {
            for(int j =i; str[j]!='\0'; j++){
                str[j]=str[j+1];
            }
        }
    }
    return str;
}
int main() {
    char str[50];
    printf("enter the string: ");
    fgets(str, 50, stdin);
    printf("str en miniscule: %s", min(str));
    return 0;
}
