#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>

int
loop(int);


/* func plan 


0 1 1 2 3 5 7 


n3 = n2 + n1
n1 = n2 
n2 = n3 


big N ( count )

make mathematic algorithm 
recusrive case is the alogirthm  ( return it )
base case is where the algorithm is not used ///


*/ 

int
main(int argc, char *argv[]) {
    printf("%d\n", loop(19));
    return(0);
}

int
 loop(int n)  {
// base case 
    if (n <= 1 ) {
        return (n);
    } else {
        return( loop(n-1)+loop(n-2) );
    }
// recursive  case
}
//currissue = what to return ? 



