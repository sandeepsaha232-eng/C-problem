#include <stdio.h>

int main() {
    int day,i,flag=0 ; 
    double money,copy,minAmount;
    
    scanf("%lf %d",&money,&day); 
    copy=money;
    minAmount=money;
    for( i=1;i<=day;i++){
        if (i%6==0)
       {
             money = money+(7*money)/10;
            i+=6;
            if (minAmount>money) minAmount=money;
        }  
        
        else if (i%2==0)
        {
            money = money-money/8;
             if (minAmount>money) minAmount=money;
        }
            
        else if (i%3==0)
        {
             money = money-money/5;
             if (minAmount>money) minAmount=money;
        }
            
        else 
        {
            money = money- money/10;
             if (minAmount>money) minAmount=money;
        }
        if ( (copy*4/10)>money ){
            if (minAmount>money) minAmount=money;
                day=i;
                flag=1;
                break;
        }
        
    }
   
    if (flag==1){
             printf("Stopped early after %d days: %.2f\n",day,money);
             printf("Minimum amount held by Bhaskar: %.2f\n",minAmount);
             printf("Better Luck Next Time!");
    }
      
    else  {
       
       
          printf("After %d days: %.2f\n", day,money);
          printf("Minimum amount held by Bhaskar: %.2f\n",minAmount);
         if ((copy*7/10)<money)
          printf("Lucky Bhaskar");
        else
             printf("Better Luck Next Time!");
       
    }
  
    
        
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}