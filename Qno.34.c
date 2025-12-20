#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num;
    scanf("%d",&num);
    if((num&1)==0)printf("Even");
    else printf("Odd");
    return 0;
}