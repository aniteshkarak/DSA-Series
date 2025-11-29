// largest Element of an Array 
#include<iostream>
using namespace std;
int main (){
    int arr[] = {2,4,5,7,5,2};
    int n = 6, l = arr[0];
    for(int i =0;i<n;i++){
        if(arr[i]>l)
        l = arr[i];
    }
    cout << l; 
}