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

    // Methods / member function
    void changedept(string newdept){
        dept = newdept;
    }

    // setter
    void setsalary(double s){
        salary = s;
    }
    // getter
    double getsalary(){
        return salary;
    }

};

int main(){
    Teacher t1;

    t1.name = "yugfsd";
    t1.subject = "ugf";
    t1.dept = "hrgfjkhu"; 
    t1.setsalary(65983);

    cout<< t1.name << endl;
    cout << t1.getsalary() << endl;

}