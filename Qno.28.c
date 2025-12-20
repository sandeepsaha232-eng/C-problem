#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
     int unit; 
    float rate =0.0;
        
    
scanf("%d",&unit);
if (unit >0){
    if (unit >300)
    rate = (unit-300)*10+100*5+200*7;
    else if (unit >100)
    rate = 100*5+(unit-100)*7;
    else if (unit <100)
    rate = unit *5;
    
    if (rate <=1200)
    rate = rate - (rate*10/100);
    
     printf("The electricity bill is: %.2f.",rate);}
else printf("Invalid Input!");
    return 0;
}