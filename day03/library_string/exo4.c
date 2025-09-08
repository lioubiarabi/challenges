#include <stdio.h>
#include <string.h>

int main() {
    char str1[]="ahmed";
    char str2[]="ahmed";
    char str3[]="yassine";
    if(strcmp(str1, str2) == 0)printf("the same string\n");
    else printf("they're diffrent\n");
    if(strcmp(str1, str3) == 0)printf("the same string\n");
    else printf("they're diffrent\n");
    return 0;
}