#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int toSeconds(int hours, int minutes, int seconds) {
    seconds = seconds+(minutes*60)+(hours*60*60);
    return seconds;
    
    
}

int main() {
        int hrs, min,sec;
    scanf("%d %d %d", &hrs,&min,&sec);
    printf("Total seconds: %d", toSeconds(hrs,min,sec));
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}
