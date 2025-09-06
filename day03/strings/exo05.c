#include <stdio.h>

int main() {
    char s[1000];
    int i = 0;
    printf("enter string: ");
    fgets(s, sizeof(s), stdin);
    while (s[i] != '\0' && s[i] != '\n') i++;
    char c[i];
    for(int j =0; j<i; j++){
        c[j]=s[j];
    }
    for(int j=0; j<sizeof(c); j++){
        s[i-1]=c[j];
        i--;
    }
    printf("the inverted string: %s", s);
    return 0;
}
