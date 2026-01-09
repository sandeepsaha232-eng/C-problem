#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,flag=0,temp;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0,j=1;i<n-1,j<n;i++,j++){
        if(a[i]==a[j])
        flag=1; 
        else flag=0;
    }
    if(flag==1 || n==1){
        printf("-1");  return 0;
    }
    for(int j=0;j<n-1;j++){
        for(int i=0;i<n-j-1;i++){
        if(a[i+1] < a[i])
        {
            temp = a[i];    
            a[i] = a[i+1];  
            a[i+1] = temp;  
        }
    }
    }
    for(int i=0;i<n-1;i++){
      if(a[i]==a[i+1])
       continue;
    else{
        printf("%d",a[1]); break;
    }  
    }
    
       
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;

}
