#include <stdio.h>

int main() {
    int num,j,flag=0;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d",&num);
    if ((num%2==0)&& (num%3==0) && (num%5!=0))
        printf("A");
    
    else if (num>20)
    {
        // 3 5 7 11
       for(int i =3;i<=11;i+=2){
           if ((num%i == 0) &( i!=9)) 
           { j =num/i;
             for(int k =3;k<=11;k+=2){ 
                  if ((j==k )&( k!=9)) { printf("B"); break;}
             }}
           else {
                     flag=1; break;}
           
       
       
        } }
    else  if (((num%3 ==0 & num%7 !=0)| (num%3!=0 & num%7==0))& (num>9&& num<99) )
     printf("C");  
      
    else if (num<200)
    { for (int i =2;i<num;i++){
            if(num==i*i) printf("D");
      }
       
    }
    else printf("E");
    if (flag==1){
         if (((num%3 ==0 & num%7 !=0)| (num%3!=0 & num%7==0))& (num>9&& num<99))
        printf("C");
    }
        
    return 0;
}