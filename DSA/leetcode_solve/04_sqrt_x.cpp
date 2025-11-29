#include<iostream>
using namespace std;

int main(){
    int n,num;
    cout << "Enter a number : ";
    cin >> n;
    if(n<2){
        cout << n << endl;
    }
    for(int i =1;i*i<=n;i++){
        num = i;
    }
    cout <<num;
}