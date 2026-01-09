#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

   int n ;
    scanf("%d",&n);
    if (n<=1){
            printf("Shape Not Possible"); return 0;
    } n=2*n;
    for (int i = 0;i<n;i++){
        if (i==n/2)continue;
        for (int j =0;j<n;j++){
            if ((i>=j && j+i<=n-1 ) || (i<=j && i+j>=n-1))
            printf("*");
            else 
            printf(" ");
            
        }
        printf("\n");
    }
    return 0;
}
