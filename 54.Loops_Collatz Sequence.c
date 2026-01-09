#include <stdio.h>

int main() {
    int i;
    
    scanf("%d",&i);
    printf("%d ",i );
    while (i>1){
        if(i%2==0) i=i/2;
        else i=3*i+1;
        printf("-> %d ",i);
       
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}