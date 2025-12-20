#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int num,a, b, c,d,swap=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d%d%d%d",&num);
    d=num%10;
    a=num/1000;
    b=((num/100)-(a*10));
    c=((num%100)-d)/10;
    if (b>a)
    {
        swap=b;
        b=a;
        a=swap;
    }
    if (c>a)
    {
        swap=c;
        c=a;
        a=swap;
    }
    if (d>a)
    {
       swap=d;
        d=a;
        a=swap;
    }
   
     if (c>b)
    {
        swap=c;
        c=b;
        b=swap;
    }
    
    
    if (d>b)
    {
         swap=d;
        d=b;
        b=swap;
    }
     if (d>c)
     {
         swap=d;
         d=c;
         c=swap;
     }
    printf("%d%d%d%d" ,a , b, c,d);
    return 0;
}
