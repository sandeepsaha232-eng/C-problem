#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

float discounted(float price, float percent){
     float discountAmount = ( price * percent ) / 100;

     float discountedPrice = price - discountAmount;
    return discountedPrice;
    
}

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    float price , percent;
    scanf("%f %f ", &price,&percent);
    printf("The final price is: %f",discounted(price,percent) );
    
    return 0;
}
