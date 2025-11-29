// Global Scope
#include<iostream>
using namespace std; 

int x = 10;

void fun(){
    cout<< x<< endl;
}

int main(){
    fun();
    ++x;
    cout << x << endl;
}