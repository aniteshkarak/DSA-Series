// single Inheritance
#include <iostream>
#include<string>
using namespace std;

class person{
public:
    string name;
    int age;

    person(string name, int age){
        this -> name = name;
        this -> age = age;
    }
};
class student : public person{
public:
    int rollno;

    student(string name, int age, int rollno): person(name,age){
        this -> rollno = rollno;
    }

    void getinfo (){
        cout << "Name : " <<name <<endl;
        cout << "Age : " <<age <<endl;
        cout << "RollNo : " <<rollno <<endl;
    }
};


int main(){
    student s1("Anil", 30, 101);
    s1.getinfo();
    return 0;
}