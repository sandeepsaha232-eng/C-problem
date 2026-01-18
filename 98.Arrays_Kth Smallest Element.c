#include <stdio.h>
#include <limits.h>
/**
 * Finds the kth smallest element in the array by iteratively finding the next
 * minimum.
 * @param arr: The input array.
 * @param n: The number of elements in the array.
 * @param k: The order of the smallest element to find (1-indexed).
 * @return: The kth smallest element in the array.
 */
int kthSmallest(int arr[], int n, int k) {
  // Write your code here
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==INT_MAX) continue;
            if(arr[i]==arr[j])
                arr[i]=INT_MAX;
        }
    }
    
    int pos,count=0,small;
    while(count!=k){
        pos=-1;
         small= INT_MAX;
        for(int i=0;i<n;i++){
        if(arr[i]<small){
             small =arr[i];
            pos =i;
        }
    }
    arr[pos]=INT_MAX;
    count++;
    }
  
        return small;
    
}

int main() {
  int n, k;
  scanf("%d", &n);

  int arr[n];
  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);
  }

  scanf("%d", &k);
  printf("%d\n", kthSmallest(arr, n, k));

  return 0;
}