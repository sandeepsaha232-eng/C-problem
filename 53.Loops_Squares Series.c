#include <stdio.h>

int main() {
    int n,a=1;
    scanf("%d",&n);
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    for (int i =1;i<=n;i++){
        
        printf("%d ",a*a);
        if(++a %3 ==0)
            ++a;
    }
    return 0;
}