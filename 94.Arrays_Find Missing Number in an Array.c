#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,var=0;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<n-1;i++)
        scanf("%d",&a[i]);
    for(int j=1;j<=n;j++){
        int flag=0;
     for(int i=0;;i++){
             if(a[i]==j)
                 flag=1;
             if(flag)
                 break;
             if(i==n-2)
             {
                 var =j;
                 break;
             }
             
         }
            if(var!=0)
                 break;
     }
        
    printf("%d",var);
    return 0;
}