#include<stdio.h>

int main(){
    int n,swap = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements in sorted order: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    for (int i = 0;i<n-1;i++){
        for(int j = 0;j<n-i-1;j++){
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
            }
        }
        if (swap == 0) {
            break;
        }
    }

    printf("Sorted array in ascending order:\n");
    for (int i = 0; i < n; i++) {
        printf("%d, ", arr[i]);
    }
    
    return 0;
}