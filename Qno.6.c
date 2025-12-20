#include <stdio.h>
#include<math.h>

int main() {
    double a ,b,c,d,root1=0,root2=0;
    scanf("%lf %lf %lf",&a ,&b,&c);
    if (a==0){
        root1=-c/b;
        printf("Roots : %.2f",root1);
        return 1;
    }
   
    
    d=((b*b)-(4*a*c));
     if (d==-0){
         
        d=0;
    }
    if (d>=0){
         root1= (-b+sqrt(d))/(2*a);
     root2= (-b-sqrt(d))/(2*a);
         printf("Roots: %.2f, %.2f\nType:",root1,root2);
    }
    else {
       root1= (-b)/(2*a);
         root2= (-b)/(2*a);
         printf("Roots: %.2f + %0.2fi, %.2f - %0.2fi\nType:",root1,(sqrt(-d)/(2*a)),root2,(sqrt(-d)/(2*a)));
    }
   
    if (d>0)printf(" Real and Distinct");
    else if(d==0) printf(" Real and Equal");
    else if (d<0) printf(" Complex");
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}