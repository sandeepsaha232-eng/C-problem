#include <stdio.h>

int main() {
    int n,num;
    scanf("%d %d",&n,&num);
    for (int i=1;i<=n;i++){
        printf("%d ",num*i);
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}