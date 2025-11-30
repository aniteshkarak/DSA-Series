#include<iostream>
#include<vector>
using namespace std;
int main (){
    int xorr = 0;
    vector<int>arr = {1, 1, 2, 3, 3, 4, 4};
    for(int i=0;i<arr.size();i++){
        xorr = xorr ^ arr[i];
    }
    cout << xorr;
}