#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int sumLastDigits(int a, int b) {
    a=a%10;
    b=b%10;
    return a+b;
    
}

int main() {
    int a,b;
    
    scanf("%d %d",&a,&b);
    
    printf("The sum of last digits is: %d",sumLastDigits(a,b));
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
