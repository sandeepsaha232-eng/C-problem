#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
int n , low,high;
    

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d %d %d",&n,&low,&high);
    if (low<=n&&high>=n)
    printf("In Range");
    else
    printf("Out of Range");
    return 0;
}
