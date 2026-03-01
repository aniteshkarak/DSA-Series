// hierarchial Inheritance
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

class teacher : public person{
public:
    string subject;

};


int main(){
    teacher t1;
    student s1;
    t1.name = "Ramalingum";
    t1.subject = "DataBase";
    s1.name = "jiksu";
    s1.rollno = 1204;

    cout << "Teacher Name : " << t1.name << endl;
    cout << "Subject : " << t1.subject << endl;
    cout << endl;
    cout << "Student Name : " << s1.name << endl;
    cout << "Roll No : " << s1.rollno << endl;

    
}