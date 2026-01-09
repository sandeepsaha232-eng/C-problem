#include <stdio.h>

int main() {
    int n,count=0;
    
    scanf("%d",&n);
    if(n==0) return 0;
    int a[n];
    if(n==0)
    {
        printf("Invalid");return 0;
    }
    for(int i=0,j=1;i<n;i++,j+=2){
        a[i]=j;
        count++;
        if(count==n)break;
    }
    for(int i=n-1;i>=0;i--){
        if(i==0){
             printf("%d.",a[i]); break;
        }
            
        printf("%d ",a[i]);
        
    }
   
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}