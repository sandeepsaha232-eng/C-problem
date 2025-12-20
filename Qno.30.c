#include <stdio.h>

int main() {
int income ; float tax;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d",&income);
    if (income>1000000)
    tax= (5*500000/100)+(20*500000/100)+ (10*(income-1000000)/100);
    else if (income>500000)
    tax= (5*500000/100)+(20*(income-500000)/100);
    else if (income >250000)
    tax= (5*(income-250000)/100);
    else if (income<=250000)
    tax= 0;
    printf("%.2f",tax);
    return 0;
}