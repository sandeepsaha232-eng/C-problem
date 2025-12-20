#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int n;
     scanf("%d",&n);
    
       for (int i=1; i<n;i+=2)
        printf("%d -%d ",i,i+1);       
      
    
    if ((n%2))
       printf("%d",n);
        
    
   
    return 0;
}