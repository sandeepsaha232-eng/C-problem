#include <stdio.h>

int main() {
    int len , bre, hei;
    char* type =" " ,* str = " ";
    
    scanf("%d %d %d",&len,&bre,&hei);
    if (len+bre <= hei || bre+hei<=len || len+hei<=bre)
    { 
        type= "Invalid"; 
        str ="Cannot form a valid shape.";
    }
    
       
     else if(len==bre && bre== hei && hei==len)
     {
         type= "Equilateral";
         str ="All sides are of the same length.";
     }
    else if(len==bre || bre== hei|| hei==len)
    { 
        type= "Isosceles"; 
        str ="Exactly two sides are equal.";
    }
    
    else
    {
        type = "Scalene";
        str ="All sides are of different lengths.";
    }
    
    printf("Lengths: [%d, %d, %d]\nType: %s\n%s",len,bre,hei,type,str);
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}