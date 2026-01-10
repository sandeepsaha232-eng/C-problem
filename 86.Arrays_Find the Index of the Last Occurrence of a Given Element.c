#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int k,n,i,pos=-1;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&k);
    for( i=0;i<n;i++){
        if(a[i]==k )
          pos=i;  
    }
    printf("%d",pos);
    
    
    return 0;
}
