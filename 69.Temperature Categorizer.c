#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int  t;
    scanf("%d",&t);
    if (t>30)
        printf("Hot");
    else if (t>=0)
        printf("Normal");
    else printf("Freezing");
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
