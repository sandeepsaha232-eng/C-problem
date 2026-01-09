#include <stdio.h>

int main() {
    int a=1,n;
    scanf("%d",&n);
    if(n==0) return 0;
    printf("<");
    for(int i=1;i<=n;i++){
        if (i==n) { printf("%d",a); break;}
    printf("%d ",a);
        a*=2;
    }
    printf(">");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}