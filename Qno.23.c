#include <stdio.h>

int main() {
    int c1,c2,c3,c5,flag=0;
    scanf("%d",&c1); // path selection 
    switch(c1){
        case 1:     printf("Player chooses the Left path.\n");
            scanf("%d",&c2);// option of left path
             switch(c2){
                     case 1:  printf("Poor choice, Game Over!\n"); 
                          break;
                      case 2:
                          printf("Player found a bridge.\n"); 
                            scanf("%d",&c3);
                           if (c3==1) {
                               printf("Player crosses the bridge safely.\n"); flag++;//survived 
                           }
                            if (c3==2) printf("Poor luck, Game Over!\n");
                          break;
                      default: printf("Invalid\n");break;
          }
            break;
            
        case 2: printf("Player chooses the Middle path.\n");
            // printf("Puzzle: I am a three-digit number. My second digit is four times bigger than the third digit, my                         first digit is three less than the second digit, and the sum of my digits is 15. What number am I?\n");
            scanf("%d",&c2);
                switch(c2){
                    case 582: printf("Player solved the puzzle.\n"); flag++;//survived
                      break ;
                    default:printf("Foolish player, Game Over!\n");break;
                }
            
        break;
        case 3: printf("Player chooses the Right path.\n");
            //"Puzzle: \"What number comes next in the sequence: 2, 6, 12, 20, __?\n\""
            scanf("%d",&c2);
            switch(c2){
                case 30: printf("Player solved the puzzle.\n"); flag++;
            break;
        default:printf("Foolish player, Game Over!\n"); break;
    }
    }
    if (flag ==1){
        
   scanf("%d",&c5);
    switch(c5){
        case 1: printf("All that glitters is not gold, Game Over!\n"); break;
        case 2: printf("All your efforts were for nothing, Game Over!\n"); break;
        case 3: printf("Congratulations!! You won the treasure.\n"); break;
       
    }
         }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return 0;
}