// miltiple Inheritance
#include <iostream>
#include<string>
using namespace std;

class student {
public:
    string name;
    int rollno;
};

class teacher{
public:
    string subject;
    double salary;
};

class TA : public student, public teacher{

};


int main(){
    TA s1;
    s1.name = "jiksu";
    s1.subject = "Computer Network";

    cout << "Name : " << s1.name << endl;
    cout << "Research Area : " << s1.subject << endl;

}