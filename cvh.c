#include<stdio.h>
int binarySearch(int arr[], int size, int target){
    int left=0, right=size-1;
    while(left<=right){
        int mid = left+(right-left)/2;
        if(arr[mid]==target){
            return mid;
        }
        if(arr[mid]<target){
            left = mid+1;
        }else{
            right=mid-1;
        }
    }return -1;
}
int main(){
    int n;
    printf("Enter number of elements\n");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: \n",n);
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
    }
    int size = sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Enter target\n");
    scanf("%d", &target);
    int result = binarySearch(arr, n, target);
    if(result != -1){
        printf("Element found at index%d\n", result);
    }else{
         printf("Element not found in the array\n");
    }
    return 0;
}