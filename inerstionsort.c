    
#include <stdio.h>


void printArray(int[], int);
void insertionsort(int[], int);
void intswap(int*, int*);


// sorted segment of disordred array goes from left to right 
// if an element is smaller than the right-most element of the sorted segment 
// start moving it left until you find one which to the left of is where it is smaller 

int main(void) {

    int array[]  = {6,7,3,5,1,3,6,2,14,4,56,13,54,23,14,13};
    int n = 16;

    printArray(array,n);
    printf("---------------------------------------------------------------\n");
    insertionsort(array,n);
    printArray(array,n);
    printf("----------------------------------------------------------------\n");

    return 0;
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

void insertionsort(int array[], int n) {

    for ( int i = 0; i < n; i++ ) {
        int lowest_unsorted_index = i;
        while ( lowest_unsorted_index> 0 && array[lowest_unsorted_index] < array[lowest_unsorted_index -1] ) {
            intswap(&array[lowest_unsorted_index],&array[lowest_unsorted_index -1]);
            lowest_unsorted_index--;
        }
    printArray(array,n);
    }
}

void intswap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}
