#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    long long  targetSum, n;
    scanf("%lld",&n);
    long long  a[n];
    for(int i=0;i<n;i++){
        scanf("%lld",&a[i]);
    }
    scanf("%lld",&targetSum);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((a[i]+a[j])==targetSum){
                  printf("%lld %lld",a[i],a[j]);
                return 0;
            }
              
        }
    }
    printf("%d",-1);
    return 0;
}