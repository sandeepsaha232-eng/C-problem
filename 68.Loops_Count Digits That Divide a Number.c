#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,d,copy,count=0;
    scanf("%d",&num); copy=num;
    while (num>0){
        d= num%10;
        if (copy%d==0) count++;
        num/=10;
    }
    printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
