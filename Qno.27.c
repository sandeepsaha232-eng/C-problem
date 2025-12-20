#include <stdio.h>

int main() {
    int  hard,strength, large;float carbon; char* str;
    scanf("%d %f %d", &hard,&carbon,&strength);
    if (hard>50 && carbon<0.7f && strength>5600)
    { large=10;
    str="All of the conditions met.";}
    else if (hard>50 && carbon<0.7f)
    {large= 9;
    str="Two conditions met.";}
    else if (carbon<0.7f && strength>5600)
      {  large= 8;
     str="Two conditions met.";}
    else if (hard>50 && strength>5600)
     {   large= 7;
    str="Two conditions met.";}
    else if (hard>50 || carbon<0.7f || strength>5600)
    { large= 6;
    str="Only one condition met.";}
    else {
        large=5;
    str="None of the conditions met.";}
    printf("The grade of the steel is: %d\n",large);
    printf(str);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}