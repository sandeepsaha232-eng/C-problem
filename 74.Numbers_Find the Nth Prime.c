#include <stdio.h>
#include <math.h>
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num,prime,count=0,n=2;
    scanf("%d",&num);
    while (count !=num){
     int   flag=1;
        for (int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                   flag=0; break;
            }
            
        }
        if (flag){
            prime =n; count ++;
        } 
        n++;
        
    }
    
    printf("%d",prime);
    return 0;
}