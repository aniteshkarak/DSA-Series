// milti-level Inheritance
#include <iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;
};
class student : public person{
public:
    int rollno;
};

class GradStudent : public student{
public:
    string researchArea;

};


int main(){
    GradStudent s1;
    s1.name = "jiksu";
    s1.researchArea = "Computer Network";

    cout << "Name : " << s1.name << endl;
    cout << "Research Area : " << s1.researchArea << endl;

}