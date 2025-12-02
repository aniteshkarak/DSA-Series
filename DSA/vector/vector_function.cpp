#include<iostream>
#include<vector>
using namespace std;
int main() {
    vector<int>vec;
    cout << "Size = " <<vec.size() << endl;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45); // add from 0 to n 

    vec.pop_back(); // remove from n to 0

    cout << "Sizze after push_ back = " << vec.size() << endl;

    for(int x: vec)
    cout <<  x << ", "  ;

    cout << endl;

    cout << vec.front() << endl; // print 1st element 
    cout << vec.back() << endl; // print last element
    cout << vec.at(1) << endl;

}
