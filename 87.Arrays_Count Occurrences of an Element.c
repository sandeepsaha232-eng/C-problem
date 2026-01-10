#include <stdio.h>

int main() {
    int n,count=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int search;
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(a[i]==search)
            count++;
    }
    printf("%d",count);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}