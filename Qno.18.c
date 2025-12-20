#include <stdio.h>

int main() {
    int n, s1,s2,s3,s4,flag=0;
    int angle1,angle2,angle3,angle4;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d",&n);
    if (n==0)
        printf("Circle");
   else  if (n==3){
        scanf("%d %d %d %d %d %d",&s1,&s2,&s3,&angle1,&angle2,&angle3);
       if ((s1==s2 & s2==s3 & s3==s1)&& (angle1==angle2 & angle3==angle2 & angle1==angle3  ) )
           printf("Equilateral Triangle");
        else flag=1;
    }
    else if (n==4){
         scanf("%d %d %d %d %d %d %d %d",&s1,&s2,&s3,&s4,&angle1,&angle2,&angle3,&angle4);
       if ((s1==s2 & s2==s3 & s3==s1 & s4==s1 & s4==s2 & s4==s3 )&& (angle1==90 & angle3==90 &  angle4==90 & angle2==90 ) )
           printf("Square");
        else if ( (s2==s4 & s3==s1 & s1!=s2 & s3!=s4) && (angle1==90 & angle3==90 &  angle4==90 & angle2==90 ))
            printf("Rectangle");
       else  if ((s1==s2 & s2==s3 & s3==s1 & s4==s1 & s4==s2 & s4==s3 )&& (angle1!=90 & angle3!=90 &  angle4!=90 & angle2!=90 ) && (angle1==angle3 & angle2== angle4) )
           printf("Rhombus");
        else if (s1==s3 & s2==s4 & angle1==angle3 & angle2==angle4)
            printf("Parallelogram");
        else flag=1;
        
    }
    if (flag==1) printf("Invalid Figure");
    return 0;
}