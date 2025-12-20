#include <stdio.h>

int main() {
    int n;
    scanf("%d",&n);
    if ((n>>31)&1)
        printf("Negative");
    else printf("Positive");
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}