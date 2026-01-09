#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    int n,Oddcount=0,evenCount=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++){
         if(a[i]%2)
             Oddcount++;
         else evenCount++;
     }
    printf("%d %d",evenCount,Oddcount);
    return 0;
}