#include <stdio.h>

int main() {
    int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
    int posi1,posi2,posi3;
    int sn1,sn2,sn3,empty=0;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    scanf("%d %d %d %d %d %d %d %d %d %d\n",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
    int arr []  ={n1,n2,n3,n4,n5,n6,n7,n8,n9,n10};
    scanf("%d %d\n",&posi1,&sn1);
    scanf("%d %d\n",&posi2,&sn2);
    scanf("%d %d\n",&posi3,&sn3);
   for (int i=0; i<=9;i++){
       if (posi1==i)
       {    empty=sn1+ arr[i];
            arr[i]= empty%10;
       }
       if (posi2==i)
        {   empty=sn2+ arr[i];
            arr[i]= empty%10;
        }
       if (posi3==i)
        {   empty=sn3+ arr[i];
            arr[i]= empty%10;
        }
   } for(int j=0;j<10;j++){
       printf("%d ",arr[j]);
}
    
    return 0;
}