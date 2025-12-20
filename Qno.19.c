#include <stdio.h>

int main() {
    int posi, num;
    scanf("%d %d",&num,&posi);
    int copy= 1<<posi;
    if ((copy&num)==0)
        printf("0");
    else printf("1");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}