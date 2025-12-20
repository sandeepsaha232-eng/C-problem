#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
char cha1,cha2;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    scanf("%c %c", &cha1,&cha2);
    printf("The distance between %c and %c is %d", cha1,cha2,cha2-cha1);
    
    return 0;
}
