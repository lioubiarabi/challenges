#include <stdio.h>

int main() {
    int array[5] ={2,4,0,1,9};
    
    int k=1;
    int t=0;
    
    for(int i =0; i<sizeof(array)/sizeof(array[0]); i++) 
        if(array[i]==k) t++;
        
    (t)? printf("found id") : printf("can't find it");

    return 0;
}