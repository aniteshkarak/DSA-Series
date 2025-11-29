// uppercase & lowercase
#include<iostream>
using namespace std;

int main(){
    char ch;
    cout << "Enter Char :";
    cin >> ch;

    if(ch>=65 && ch<=90){
        cout <<"Uppercsae";
    }
    else{
        cout <<"Lowercase";
    }
    
    return 0;
}
