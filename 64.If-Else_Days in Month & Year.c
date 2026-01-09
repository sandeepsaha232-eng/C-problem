#include <stdio.h>
#include <string.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int month,common ,year,out=0;
    scanf("%d\n%d",&month,&year);
    if (month>=1&& month<=12){}
    else {
        printf("Invalid Month\n");
       out=1;
    }
    if (year<=0 ){
         printf("Invalid Year");
       out=1;
    } 
    if(out==1)
        return 0;
    switch(month){
        case 1: case 3: case 5: case 7:case 8:case 10: case 12 :  printf("31"); break;
        case 4: case 6: case 9: case 11: printf("30"); break;
            ;
        case 2: if (year%4==0){
            if (year%100==0){
               if (year%400==0)
                   common=0;
               else common=1;
            }
            else  common=0;
        }else {
            common=1;
        }
         if (common==1)
             printf("28");
           else printf("29");
            
            break;
    }
       
    return 0;
}