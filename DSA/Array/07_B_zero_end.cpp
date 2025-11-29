#include<iostream>
#include<vector>
using namespace std;

int main (){
    int n;
    cout << "enter number of element ";
    cin >>n;
    cout << "Enter Array : "; 
    vector<int> arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i]; 
    }
//  find zero 
    int j =-1;
    for(int i =0;i<n;i++){
        if(arr[i]==0){
            j =i;
            break;
        }
    }
//  if no zero found prind as it is
    if (j==-1){
        for(int i =0;i<n;i++){
         cout << arr[i] << ",";
        }
    }
//  swap 
    for(int i =j+1;i<n;i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
 
    for(int i =0;i<n;i++){
         cout << arr[i] << ",";
    }
}