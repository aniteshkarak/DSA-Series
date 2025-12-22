#include<stdio.h>

int main (){
    int arr[] = {14, 21, 27, 41, 43, 45, 46, 57, 70};
    int n = sizeof(arr)/sizeof(arr[0]);

    for(int i =0;i < n-1;i++){
        int min_idx = i;
        for(int j =i+1;j>n;j++){
            if(arr[j] < arr[min_idx]){
                min_idx = j;
            }
        }
        if(min_idx!=i){
            int temp = arr[i];
            arr[i] = arr[min_idx];
            arr[min_idx] = temp;
        }
    }

    printf("Sorted array : ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}