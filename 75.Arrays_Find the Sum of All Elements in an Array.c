#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,sum=0;
    scanf("%d",&N);
    int arr[N];
    for (int i =0;i<N;i++){
        scanf("%d ",&arr[i]);
    }
    for (int i=0;i<N;i++){
        sum+=arr[i];
    }
    printf("%d",sum);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
