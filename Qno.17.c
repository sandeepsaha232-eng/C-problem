#include <stdio.h>

int main() {
    int num1,a=0,num2;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d\n%d",&num1,&num2);
    a=num1^num2;
    printf("%d\n%d",a^num1,a^num2);
    
    return 0;
}