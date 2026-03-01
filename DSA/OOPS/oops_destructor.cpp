#include <iostream>
using namespace std;

class student {
    public:
        string name;
        // double cgpa;//stack memory copy
        double * cgpaptr; // dynmaic memory allocation (heap)

        student (string name, double cgpa){
            this -> name = name;
            cgpaptr = new double;
            *cgpaptr = cgpa;
        }

        student (student &obj){
            this -> name = name;
            cgpaptr = new double;
            *cgpaptr = *obj.cgpaptr;  // deep copy 
        }

        // destuuctor 
        ~student(){
            cout << "Hi I delete everything\n";
            delete cgpaptr;
        }

        void getinfo(){
            cout << "Name : " << name <<endl;
            cout << "CGPA : " << *cgpaptr << endl;
        }
};

int main(){
    student s1("Rahul pal", 8.9);
    // student s2(s1);
    s1.getinfo();

    // s2.name = "Mahuya";
    // *(s2.cgpaptr) = 9.5;
    // s2.getinfo();

}