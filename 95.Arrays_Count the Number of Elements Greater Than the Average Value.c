#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld",&n);
    int a[n],count=0;
    long long sum=0;
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
     for(int i=0;i<n;i++){
         sum+=a[i];
     }
    double avg =(sum*1.0)/n;
    for(int i=0;i<n;i++){
        if(avg<a[i])
            count++;
    }
    printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
