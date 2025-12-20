#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num; _Bool b1=0, b2=0 , b3=0; char *verd;
    scanf("%d",&num);
    if (num>10&&num%2==0)
        b1=1;
    if (num>15&& num%3==0)
        b2=1;
    if (num%7==0)
        b3=1;
    if (b1& b2&b3)
        verd="SUPERNATURAL";
    
     else if (b1&b2 |b2&b3 | b3&b1)
        verd="MIRACULOUS";
    else if (b1|b2|b3)
        verd="MAGICAL";
    else if (!b1|b2|b3)
        verd="NORMAL";
    printf("The verdict for the number %d is: %s",num,verd);
    return 0;
}