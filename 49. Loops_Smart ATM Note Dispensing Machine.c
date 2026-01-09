#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    int money,count500=0,count200=0,count100=0;
    scanf("%d",&money);
    if (money>0){
        for (int i =money;i>0;){
            if(i>=500){
                i-=500; count500++;
            }
           else if(i>=200){
                i-=200;count200++;
            }
           else if (i>=100){
                i-=100; count100++;
            }
            else if (i<100){
                printf("Invalid");
              break;
            }
        }
        printf("500-rupee notes: %d\n200-rupee notes: %d\n100-rupee notes: %d",count500,count200,count100);
    }else printf("Invalid amount");
    return 0;
}
