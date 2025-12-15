#include<iostream>
#include<vector>
using namespace std;

int recbinaryserch(vector<int>arr, int tar,int st, int end){

    if(st<=end){
        int mid= st+(end-st)/2;

        if(tar>arr[mid]){
            return recbinaryserch(arr,tar,mid+1,end);
        }
        else if(tar<arr[mid]){
            return recbinaryserch(arr,tar,st,mid-1);
        }
        else{
            return mid;
        }
    }

    return -1;
}

int main (){
    vector<int> arr1 = {-1,0,3,4,5,9,12} ;   //odd
    int tar1 = 12;

    int st = 0, end=arr1.size()-1;

    cout << recbinaryserch(arr1, tar1,st,end) << endl;

    vector<int> arr2 = {-1,0,3,5,9,12} ;  //even
    int tar2 = 12;

    int st1 = 0, end1=arr2.size()-1;

    cout << recbinaryserch(arr2, tar2,st1,end1) << endl;


}