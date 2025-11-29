#include<iostream>
using namespace std;
 
int main (){
    int n = 5;
    int arr[] = {1,2,3,4,5};
    int temp = arr[0];
    for(int i=1;i<n;i++){
        arr[i-1] = arr[i];
    }
    arr[n-1]=temp;
    for(int k= 0;k<n;k++){
        cout << arr[k] <<" ";
    }
}