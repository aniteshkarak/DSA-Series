#include <iostream>
#include<string>
using namespace std;

// constructor overloading
class student {
public:
    string name;

    student(){
        cout << "Non-Parameterized" << endl;
    }
    student (string name){
        this -> name = name;
        cout << "Parameterized"<< endl << endl;
    }
};

// function Overloading
class print {
public:
    void show(int x){
        cout <<"Int : " << x << endl;
    }
    void show(char ch){
        cout <<"Char : " << ch << endl;
    }
};

int main(){
    student s1;
    student s2("name");

    print p1;
    p1.show('&');
    p1.show(10);
}
