#include<iostream>
using namespace std;
int decToBinary(int decnum){
    int ans = 0, pow = 1;
    while(decnum > 0){
        int rem = decnum % 2;
        decnum/=2;

        ans += (rem*pow);
        pow *=10;
    }
    return ans;
}
int main (){
    int decnum;
    cout << "Enter Num :";
    cin >> decnum;

    for(int i=1;i<=decnum;i++){
        cout << decToBinary(i) << endl;
    }
}