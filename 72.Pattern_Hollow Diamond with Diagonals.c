#include <stdio.h>

int main() {
    int n;
    if (scanf("%d", &n) != 1) return 0;

    if (n <= 0) {
        printf("Shape Not Possible");
        return 0;
    }

   
    for (int i = 1; i <= n; i++) {
       
        for (int k = 1; k <= n - i; k++) printf(" ");


        for (int j = 1; j <= (2 * i - 1); j++) {
           
            if (j == 1 || j == (2 * i - 1) || i == n || j == i) 
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }


    for (int i = n - 1; i >= 1; i--) {
       
        for (int k = 1; k <= n - i; k++) printf(" ");

        for (int j = 1; j <= (2 * i - 1); j++) {
         
            if (j == 1 || j == (2 * i - 1) || j == i) 
                printf("*");
            else 
                printf(" ");
        }
        printf("\n");
    }

    return 0;
}