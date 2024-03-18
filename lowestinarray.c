#include <stdio.h>
int lowest(int[],int);
int main(void) {
  
    int array[] = {1,4,2,6,5,2,14,67,4,2};
    int n = 10;
    printf("%d\n",lowest(array,n));
    return 0;
}

int lowest( int array [], int n) {

    int lowest = array[0];

    for ( int i = 0; i < n ; i++ ) {
        if ( array[i] < lowest ) {
            lowest = array[i];
        }
    }
    return lowest;
