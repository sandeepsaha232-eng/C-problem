#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num,i=1; char *angle ;
    
    scanf("%d",&num);
    if (num!=360)
        num= num%360;
            if (num<90)
            angle="Acute Angle";
            else if (num==90)
            angle="Right Angle";
            else if (num>90 && num<180)
            angle = "Obtuse Angle";
            else if (num==180)
            angle= "Straight Angle";
            else if (num>180&&num<360)
            angle="Reflex Angle";
            else if (num==360)
            angle = "Full Rotation";
            
       printf(angle);
    return 0;
}
