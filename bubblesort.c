#include <stdio.h>

/* bubblesort 

on^2 complexity 
- quickosrt is faster 
but this allows you to measure hwo disorgnaised an array is ( kinda )

*/


int bubble(int[],int);
void printArray(int[], int);

int main(void) {

    int array[]  = {6,7,3,5,1,3,6,2,14,4,56,13,54,23,14,13};
    int n = 16;

    bubble(array,n);
    printArray(array,n);
    
    return 0;
}

int bubble(int array[], int n) {

    int temp;
    for ( int i = 0; i < n; i++ ) {
        for ( int j = 1; j < n; j++ ) {
            if ( array[j] < array[j-1] ) {
                temp = array[j];
                array[j] = array[j-1];
                array[j-1] = temp;
            }

        }
    }
    return(array);
}


void printArray(int array[], int n) {
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", array[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
}
