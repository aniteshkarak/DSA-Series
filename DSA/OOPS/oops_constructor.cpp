#include<iostream>
#include<string>
using namespace std;

class Teacher{
private:
    double salary;
public:
    // Prooerties / attributes
    string name;
    string dept;
    string subject;
    // double salary;

    // non-parameterized
    Teacher(){
        cout << "Hii I am Constructor. \n";
    }

    // parameterized
    Teacher(string n, string d, string s, double sal){
        name = n;
        dept = d;
        subject = s;
        salary = sal;
    }

    // custom copy contractor
    Teacher(Teacher &orgobj){
        name = orgobj.name;
        dept = orgobj.dept;
        subject = orgobj.subject;
        salary = orgobj.salary;
    }

    void getinfo(){
        cout << "Name : " << name << endl;
        cout << "Subject : " << subject << endl;
        cout << "Salary : " << salary << endl;
    }

};

int main(){
    Teacher t1("Anitesh", "BCA", "DSA", 2500);
    // t1.getinfo();

    Teacher t2(t1); // Default Copy Constructor - invoke
    t2.getinfo();

}