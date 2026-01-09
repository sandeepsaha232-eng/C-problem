#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <limits.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long n ;
    scanf("%ld",&n);
    if (n>=INT_MIN && n<=INT_MAX)
    if ((n&3)==0)
        printf("Divisible");
    else printf("Not Divisible");
    else printf("Out of Range");
    return 0;
}
