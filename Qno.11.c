#include <stdio.h>

int main() {
    int budget,numGuests,foodCostPerGuest,decorationCost,musicCost,extraExpenses;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%d\n%d\n%d\n%d\n%d\n%d", &budget,&numGuests,&foodCostPerGuest,&decorationCost,&musicCost,&extraExpenses);
    int totalexpense= foodCostPerGuest+decorationCost+musicCost+extraExpenses;
    foodCostPerGuest *=  numGuests;
    if (totalexpense<=budget&& 5<numGuests&&numGuests<=50&&((decorationCost< (0.3*budget))| (foodCostPerGuest<(0.5*budget))  )){
        
        if (numGuests>25 ){ if(musicCost==0){
        printf("Celebration Denied"); return 0;
        }
            
        }printf("Celebration Approved");
            
    } 
    else  printf("Celebration Denied");
    return 0;
        }