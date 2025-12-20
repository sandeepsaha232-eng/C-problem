#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int age;
  
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    scanf("%d",&age);
    if (age>=18) printf("Eligible");
    else printf("Not Eligible");
    return 0;
}
