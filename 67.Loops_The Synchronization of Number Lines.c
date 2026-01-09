#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n1,n2 ;
    scanf("%d %d",&n1,&n2);
    int a= n1>n2 ? n1:n2;
  for (int i =1 ;i<=pow(10,9);i++){
      if (a*i%n1==0 && a*i%n2==0)
      {
          printf("%d",a*i); break;
      }
  }
    return 0;
}
