#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int  day,month,year;
    scanf("%d %d %d",&day,&month,&year);
    if (1<=day&& day<28)
        day +=1;
    else if(month==12){
        if (day>=28&& day<31){
            day+=1;
        }
        else if (day==31) {
            day=01; month=01;year+=1;}
    }
    
   else  if (month==2){
      if(year % 400 == 0) 
      {
          if (day>=28&& day<29){
            day+=1;
        }
          else if(day==29){
              day=01;month=03;
          }
      }
       else if(year % 4 == 0 && year % 100 != 0)
       {
          if (day>=28&& day<29){
            day+=1;
        }
          else if(day==29){
              day=01;month=03;
          } 
       }
       else
       {
               day=01;month=03;
       }
    }
    
    else if (month==1 ||month==3 || month==5 || month==7 ||month==8 ||month==10 || month==12){//even no. of month - 31 days 
        if (day>=28&& day<31){
            day+=1;
        }
        else if (day==31) {
            day=01; month+=1;}
    }
    else {
        if(day>=28&&day<30){
            day+=1;
        }
        else if(day==30){
            day=01;month +=1;
        }
    }
    if(day<10&& month<10)
    printf("0%d-0%d-%d",day,month,year);
    else if (month<10)
         printf("%d-0%d-%d",day,month,year);
    else if (day<10)
        printf("0%d-%d-%d",day,month,year);
    else  printf("%d-%d-%d",day,month,year);
    return 0;
}
