#include <stdio.h>

int main() {
    int a,n,d;
    scanf("%d \n %d %d",&n,&a,&d);
    if (n>=1){
        if (d>0)
            for (int i =a;i<=(a+(n-1)*d ); i+=d)
            printf("%d ",i);
        else if (d<0){
           
            for (int i =a;i>=(a+(n-1)*d ) ; i+=d){
                 printf("%d ",i);
                if (i==(a+(n-1)*d )) break;
            }
           
        }
        else if (d==0){
            for(int i=1;i<=n;i++)
            printf("%d ",a);
        }
        
 
    }
    else if (n==0) 
       return 0;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}