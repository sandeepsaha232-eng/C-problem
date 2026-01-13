#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,flag=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++){
        if(a[i]<=a[i+1]){
            flag=1;
        }  
        else {
            flag=0;
            break;
        }
    }
    if((flag) || n==1)
    {
        printf("Ascending");
        return 0;
    }
    for(int i=0;i<n-1;i++){
        if(a[i]>=a[i+1])
            flag=1; 
        else {
            flag=0;
            break;
        }
    }
    if(flag)
    {
         printf("Descending");
        return 0;
    }
    else printf("Not Sorted");
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
