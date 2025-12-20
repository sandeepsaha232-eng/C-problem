#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num ;
    scanf("%d",&num);
    if (num%2!=0)
        num *=2;
    printf("%d",num);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
