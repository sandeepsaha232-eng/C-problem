#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n;
    scanf("%d",&n);
    for (int i =1;i<=n;i++){
        for (int j =1 ;j<= n-i+1;j++){
            printf("%d ",n-j-i+2);
        }printf("\n");
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
