#include <stdio.h>

int main() {
    int array[5] ={2,4,0,1,9};
    int x=sizeof(array)/sizeof(array[0]);
    
    for(int i =0; i<x; i++) {
        int index = i;
        for(int j=i; j<x; j++)
            if(array[j]<array[index]) index = j;
        int swap = array[index];
        array[index]=array[i];
        array[i]=swap;
    }
            
            
        
    for(int i =0;i<x; i++){
        printf("%d ", array[i]);
    }

    return 0;
}