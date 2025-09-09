#include <stdio.h>

int main() {
    int array[5] ={2,4,0,1,9};
    int x=sizeof(array)/sizeof(array[0]);
    int k=1;
    int t;
    for(int i =0; i<x; i++) {
        for(int j=0;j<x-1-i; j++){
            if(array[j]>array[j+1]){
                t=array[j];
                array[j]=array[j+1];
                array[j+1]=t;
            }
        }
    }
            
            
        
    for(int i =0;i<x; i++){
        printf("%d ", array[i]);
    }

    return 0;
}