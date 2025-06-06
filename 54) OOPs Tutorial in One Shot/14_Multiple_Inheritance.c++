# include <iostream>
using namespace std;

class Student{
    public:
    string name;
    int rollno;
};

class Teacher{
    public:
    string sub;
    int salary;
};

class TA : public Student, public Teacher{
    public:
    string researchArea;
};

int main(){
    TA t1;
    t1.name = "Tony stark";

    cout<<"Name : "<<t1.name<<endl;
    return 0;
}