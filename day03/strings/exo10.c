#include <stdio.h>
int trouve(char* str, char *sous){
    int j = 0, size1=0, size2=0;
    while(sous[size2]!= '\0' && sous[size2] != '\n')size2++;
    while(str[size1]!= '\0' && str[size1] != '\n')size1++;
    if(size1<size2){
        printf("impossible\n");
        return 0;
    } else{
        for(int i=0; i<=size1; i++){
            if(j==size2){
                return 1;
            } else {
                if(str[i] == sous[j])j++;
                else j=0;
            }
        }
        return 0;
    }
    
}
int main() {
    char str[50], sous[50];
    printf("enter the string: ");
    fgets(str, 50, stdin);
    printf("what's the string you want to find: ");
    fgets(sous, sizeof(sous), stdin);
    if(trouve(str, sous)) printf("I found it");
    else printf("can't find it");
    return 0;
}
