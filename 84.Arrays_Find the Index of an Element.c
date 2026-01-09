#include <stdio.h>

int main() {
    int n,store;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int search;
    scanf("%d",&search);
    for(int i=0;i<n;i++){
        if(a[i]==search)
        {
            store=i;
           break;
        }
        else  store=-1;
    }
    printf("%d",store);

    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}