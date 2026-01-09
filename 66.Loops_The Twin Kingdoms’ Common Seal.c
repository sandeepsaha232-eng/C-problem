#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num1,num2;
    scanf("%d %d",&num1,&num2);
if (num1==0){
     printf("%d",num2); return 0;
}
   
    else if (num2==0) {
        printf("%d",num1);return 0;
    } 
    
    int lea = num1>num2 ? num2:num1;
    
  for (int i=lea ;i>=1;i--){
      if (num1%i==0 && num2%i==0){
         printf("%d",i); break;
          
      }
  }
    
    return 0;
}
