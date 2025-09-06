#include <stdio.h>
int cal(char* str, char letter){
    int l = 0;
    for(int i =0; i<sizeof(str); i++){
        if(str[i] == letter) l++;
    }
    return l;
}
int main() {
    char str[50], letter;
    printf("enter the string: ");
    fgets(str, 50, stdin);
    printf("enter the seach lette: ");
    scanf("%c", &letter);
    printf("there is %d letter '%c' in the phrase", cal(str, letter), letter);
    return 0;
}
