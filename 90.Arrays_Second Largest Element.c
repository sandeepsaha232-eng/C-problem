#include <stdio.h>
#include <limits.h>

int findSecondLargest(int arr[], int n) {
    // Complete the function logic here
   int flag=0;
    
    for(int  i=0;i<n-1;i++){
        if(arr[i]==arr[i+1]){
            flag++;
        }
    }
      if(flag==n-1 || (n==1))
        return -1;
        int  max=INT_MIN;
    for(int  i=0;i<n;i++){
        if(arr[i]>max)
            max=arr[i];
    }
    int  Secondmax=INT_MIN;
    for(int  i=0;i<n;i++){
        if(arr[i]>Secondmax&& arr[i]<max)
            Secondmax=arr[i];
    }
    return Secondmax;
}

int main() {
    int n;
    scanf("%d", &n);
    
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("%d\n", findSecondLargest(arr, n));
    return 0;
}