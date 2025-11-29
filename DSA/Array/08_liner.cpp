#include<iostream>
using namespace std;


int main (){
    int n;
    cout << "enter number of element ";
    cin >>n;
    cout << "Enter Array : "; 
    int arr[n];
    for(int i =0;i<n;i++){
        cin >> arr[i]; 
    }
    int num;
    cout << "serch elemnt Index = ";
    cin >> num;
    bool found = false;
    for(int i =0;i<n;i++){
        if(arr[i]==num){
            cout << i;
            found = true;
            break;
        } 
    }
    if(!found) cout << "cannot find";
}