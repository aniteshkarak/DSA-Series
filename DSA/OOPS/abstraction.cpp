#include <iostream>
#include<string>
using namespace std;

class shape {
public:
    virtual void draw()= 0;
};

class circle : public shape {
public:
    void draw(){
        cout << "Drawing a circle.";
    }    
};

int main(){
    circle c;
    c.draw();
}
