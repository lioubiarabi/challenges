#include <stdio.h>
#include <string.h>

int main() {
    char str[]="hello ahmed";
    char s[]= "ahmed";
    
    if(strstr(str, s)){
        printf("trouvee");
    } else {
        printf("non trouvee");
    }
    
    return 0;
}