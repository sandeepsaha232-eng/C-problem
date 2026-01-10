#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int N,n;
    scanf("%d",&n);
    int a[n];
    for(int i =0;i<n;i++){
        scanf("%d",&a[i]);
    }
    scanf("%d",&N);
    int b[N];
     for(int i =0;i<n;i++){
        scanf("%d",&b[i]);
    }
    if(n!=N){
        printf("Not Equal");
        return 0;
    }
    for(int i=0;i<n;i++){
        if(a[i]!=b[i]){
            printf("Not Equal");
            return 0;
        }
    }
    printf("Equal");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
