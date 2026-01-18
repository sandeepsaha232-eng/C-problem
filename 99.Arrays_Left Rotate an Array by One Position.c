#include <stdio.h>

void leftRotateByOne(int arr[], int n) {
    // Your code here 
    int temp=arr[0];
    for(int i=0;i<n;i++){
        if(i==n-1){
            arr[n-1]=temp;
            break;
        }
        arr[i]=arr[i+1];
    }
    
   
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    leftRotateByOne(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}