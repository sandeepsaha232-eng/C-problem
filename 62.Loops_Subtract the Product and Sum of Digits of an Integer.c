#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,pro=1,sum=0;
    scanf("%d",&n);
    for (int i=n ; i>0; ){
        sum+=i%10;
        pro*=i%10;
        i/=10;
    }
    printf("%d",pro-sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
