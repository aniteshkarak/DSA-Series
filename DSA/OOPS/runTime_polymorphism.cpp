#include <iostream>
#include<string>
using namespace std;

// function Overloading
class parent {
public:
    void getInfo(){
        cout << "Parent Class\n" << endl;
    }

    virtual void hello(){
        cout << "Hello from par\n";
    }
};

class child : public parent {
public:
    void getInfo(){
        cout << "Child Class\n" << endl;
    }

    void hello(){
        cout<<"Hello from child\n";
    }
};

// constructor overloading
class student {
public:
    
};



int main(){
    parent p1;
    p1.getInfo();

    child c1;    
    c1.getInfo();
    c1.hello();
}
