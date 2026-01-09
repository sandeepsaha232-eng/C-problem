#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,copy,sum=0;
    scanf("%d",&n);
  copy=n;
    if (n>0){
     for (int i =pow(10,6);i>=10;i/=10){
        sum+=n/i;
        n%=i;
    }
        sum+=n;
        if (copy%sum)
        printf("%d is not a harshad number",copy);
        else printf("%d is a harshad number",copy);
    }
    
    else printf("Invalid");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
