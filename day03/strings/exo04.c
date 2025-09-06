#include <stdio.h>

int main() {
    char s1[1000], s2[1000];
    int i = 0, j = 0, r=0;
    printf("enter string 1: ");
    fgets(s1, sizeof(s1), stdin);
    printf("enter string 2: ");
    fgets(s2, sizeof(s2), stdin);
    while (s1[i] != '\0' && s1[i] != '\n') i++;
    while (s2[j] != '\0' && s2[j] != '\n') j++;
    if(i!=j)printf("diffrent");
    else {
        for(int k=0; k<i; k++){
            if(s1[k] != s2[k]){
                printf("diffrent");
                r++;
                break;
            }
        }
        if(!r) printf("the same");
    }
    return 0;
}
