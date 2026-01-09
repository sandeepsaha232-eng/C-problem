#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    long long n;
    scanf("%lld",&n);
    if(n<=0)return 0;
    long long a[n];
    
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    long long sumEven=0,sumOdd=0;
    for(int i=0;i<n;i+=2){
        sumEven+=a[i];
    }
    for(int i=1;i<n;i+=2){
        sumOdd +=a[i];
    }
    printf("%lld",sumEven-sumOdd);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
