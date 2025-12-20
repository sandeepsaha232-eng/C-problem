#include <stdio.h>

int main() {
    int a,b;
    scanf("%d %d",&a,&b);
    int res= a-b;
    if ((res>>31&1))
        printf("%d",a);
    else printf("%d",b);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}