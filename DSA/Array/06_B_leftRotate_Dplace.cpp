#include<iostream>
#include<vector>
using namespace std;
void rotate(vector<int> &arr, int s, int e ){
    while(s<=e){
        int a;
        int temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
        arr[a]=arr[s];
        s++;
        e--;
        // cout << arr[a];
    }
    // cout << endl;
    
}

int main (){
//  take input
    int n;
    cout << "enter number of element ";
    cin >>n;
    int d;
    cout << "D place = ";
    cin >> d;
    cout << "Enter Array : "; 
    vector<int>arr(n);
    for(int i =0;i<n;i++){
        cin >> arr[i]; 
    }
    d=d%n;
//  Rotate 
    rotate(arr,0, d-1);
    rotate(arr,d,n-1);
    rotate(arr,0,n-1);
//  output
    for(int i =0;i<n;i++){
        cout << arr[i]<<","; 
    }

}