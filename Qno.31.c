#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num1,num2,num3,large;
    scanf("%d %d %d",&num1,&num2,&num3);
    if (num1>num2&&num1>num3)
    large=num1;
    else if (num2>num1&&num2>num3)
    large= num2;
    else if (num3>num1&&num3>num2)
    large= num3;
    
    
    
    printf("The largest number is : %d", large);
    return 0;
}