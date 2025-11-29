#include<iostream>
using namespace std;

int main (){
//  take input
    int n;
    cout << "enter number of element ";
    cin >>n;
    int d;
    cout << "D place = ";
    cin >> d;
    cout << "Enter Array : "; 
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i]; 
    }
    d=d%n;
//  fill temp
    int temp[d];
    for(int i=0;i<d;i++){
        temp[i]=arr[i];
    }
//  shifting
    for(int i =d;i<n;i++){
        arr[i-d]=arr[i];
    }
//  temp shift in d place  
    for(int i=n-d;i<n;i++){
        arr[i]=temp[i-(n-d)];
    }
//  output
    for(int i =0;i<n;i++){
        cout << arr[i]<<","; 
    }

}