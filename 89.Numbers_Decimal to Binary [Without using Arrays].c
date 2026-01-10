#include <stdio.h>

int main() {
    int n,num,copy;
    scanf("%d",&n);
    copy=n;
    int i=1;
    while(n>0){
        num=num+i*(n%2);i*=10;
        n/=2;
    }
    printf("Binary equivalent of %d: %d",copy,num);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}