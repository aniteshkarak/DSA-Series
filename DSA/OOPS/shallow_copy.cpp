#include <iostream>
using namespace std;

class student {
    public:
        string name;
        // double cgpa;//stack memory copy
        double * cgpastr; // dynmaic memory allocation (heap)

        student (string name, double cgpa){
            this -> name = name;
            cgpastr = new double;
            *cgpastr = cgpa;
        }

        student (student &obj){
            this -> name = name;
            cgpastr = new double;
            *cgpastr = *obj.cgpastr;  // deep copy 
        }

        void getinfo(){
            cout << "Name : " << name <<endl;
            cout << "CGPA : " << *cgpastr << endl;
        }
};

int main(){
    student s1("Rahul pal", 8.9);
    student s2(s1);
    s1.getinfo();

    s2.name = "Mahuya";
    *(s2.cgpastr) = 9.5;
    s2.getinfo();

}