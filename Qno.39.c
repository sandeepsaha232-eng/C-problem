#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
   int num1,num2;
    
    scanf("%d %d",&num1,&num2);
    int he1= num1/10;
    int he2=num2/10;
    num1= num1-he1*10;
    num2= num2-he2*10;
    if (num1==num2) printf("YES");
    else printf("NO");
    return 0;
}
