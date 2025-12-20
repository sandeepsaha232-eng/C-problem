#include <stdio.h>

int main() {
int n,i;

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d\n%d",&n,&i);
   int a = 1<<i;
    
    
     printf("%d", a|n);
    
    return 0;
}