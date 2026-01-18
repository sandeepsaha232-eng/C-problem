#include <stdio.h>

// Function to rotate the array
void reverseArray(int arr[],int i , int j){
    for(;j>i;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
}
void rotateArray(int arr[], int n, int k) {
    // Your implementation here
    if (n <= 1  || k == 0) return;
   k %=n;
    reverseArray(arr,0,k-1);
    reverseArray(arr,k,n-1);
    reverseArray(arr,0,n-1);
}



int main() {
    int n, k;
    // Reading input
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; ++i) {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);

    // Call the function to rotate the array
    rotateArray(arr, n, k);
    
    // Print the rotated array
    for (int i = 0; i < n; ++i) {
        printf("%d ", arr[i]);
    }

    return 0;
}