
#include <stdio.h>


void selectionsort(int[],int);
void printArray(int[], int);
void intswap(int*, int*);

int main(void) {
   

    int array[]  = {6,7,3,5,1,3,6,2,14,4,56,13,54,23,14,13};
    int n = 16;
    printArray(array,n);

    selectionsort(array,n);
    
    printArray(array,n);
    
    return 0;
}


void
selectionsort(int array[],int n) {

    for ( int i = 0; i < n; i++ ) {
        int min_index = i;
        // finds the smallest element from the unsorted portion of the array
        for ( int j = i+1 ; j < n; j++ ) { 
            if (array[j] < array[min_index]) {
                min_index = j;
            }
        }
        // remove th emoinimum value form the array completley 
        // shift everything else between the started of th eunsorted pack and th eminimum index up 
         // a free space now exists just after the unsroted pack, where the smallest element not in the sorted pack goes 
         // now sorted for that segment of the array 
        int min_value = array[min_index];
        for ( int k = min_index; k > i; k-- ) {
            intswap(&array[k],&array[k-1]);
        }
        // when shifting 
        printArray(array,n);
    }

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


void 
intswap ( int* a, int* b ) {

int temp = *a;
*a = *b;
*b = temp;

}