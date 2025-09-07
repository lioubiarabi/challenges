#include <stdio.h>

int main() {
    int array[]={1,8,2,9,5,7,4};
    int size = sizeof(array)/sizeof(array[0]);
    printf("before: ");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    for(int i=0; i<size; i++){
        for(int j=i; j<size-1-i; j++){
            if(array[j]>array[j+1]){
                int r= array[j];
                array[j]= array[j+1];
                array[j+1] = r;
            }
        }
    }
    printf("\n after: ");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
