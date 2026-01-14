#include <stdio.h>

void reverseArray(int arr[], int n) {
    // Implement the function to reverse the array in-place
    int b[n];
    for(int i=0;i<n;i++){
       b[i]=arr[i];
    }
  for(int i=0;i<n;i++){
        arr[i]=b[n-i-1];
    }
}

int main() {
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    reverseArray(arr, n);

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    
    return 0;
}