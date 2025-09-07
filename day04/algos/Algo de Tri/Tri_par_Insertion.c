#include <stdio.h>

int main() {
    int array[]={1,8,2,9,5,7,4};
    int size = sizeof(array)/sizeof(array[0]);
    printf("before: ");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    int j, tempo,i;
    for( i=1; i<size; i++){
        tempo = array[i];
        for( j=i-1; j>=0 && array[j]>tempo; j--){
            array[j+1]=array[j];
        }
        array[j+1]=tempo;
    }
    printf("\n after: ");
    for(int i=0; i<size; i++){
        printf("%d ", array[i]);
    }
    return 0;
}
