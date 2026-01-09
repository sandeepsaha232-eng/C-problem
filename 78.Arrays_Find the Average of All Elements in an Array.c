#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    long long sum=0;
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    printf("%.6lf",sum/(n*1.0));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
