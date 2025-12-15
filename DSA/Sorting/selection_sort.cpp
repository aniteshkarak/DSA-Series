#include<iostream>
using namespace std ;

void selectionsort (int arr[], int n){
    for (int i =0;i<n-2;i++){
        int smalllestIdx = i;
        for(int j = i+1;j<n;j++){ 
            if(arr[j] < arr[smalllestIdx]) {
                smalllestIdx = j;
                // swap(arr[i],arr[smalllestIdx]);
            } 
        }
        swap(arr[i],arr[smalllestIdx]);
    }
}

int main(){
    int n = 5;
    int arr[] = {4,1,5,2,3};

    selectionsort(arr,n);

    for(int i =0;i<n;i++){
        cout << arr[i] << ", ";
        // cout << endl;
    }
}
