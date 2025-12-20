#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int h,m;
    
     scanf("%d %d",&h,&m);
    if (h==00) printf("%d:%d AM",h+12,m);
    else if (h==12)
    printf("%d:%d PM",(h),m);
    else if (h>00&&h<12)
    printf("%d:%d AM",h,m);
    else  
    printf("%d:%d PM",(h-12),m);
    return 0;
}
