#include<iostream>
#include<vector>
using namespace std;

int Partition(vector<int>& arr, int st,int end){
    int idx = st-1; int pivet = arr[end];

    for(int j = st; j<end; j++){
        if(arr[j] <= pivet){
            idx++;
            swap(arr[j], arr[idx]);
        }
    }
    idx++;
    swap(arr[end], arr[idx]);

    return idx;
}

void QuickSort(vector<int>& arr, int st, int end){
    if(st<end){
        int pivIdx = Partition(arr, st, end);
        QuickSort(arr, st, pivIdx-1);  //left
        QuickSort(arr,pivIdx+1,end);
    }
}

int main(){
    vector<int> arr = {5,2,6,4,1,3};
    QuickSort(arr, 0, arr.size()-1);
    cout << "sorted Array : {" ;
    for(int x : arr){
        cout << x << " ";
    }
    cout << "}";
}