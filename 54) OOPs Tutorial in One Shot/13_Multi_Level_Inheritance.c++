# include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;
};

class Student : public Person{
    public:
    int rollno;
};

class GradStudent : public Student{
    public:
    string researchArea;
};

int main(){
    GradStudent s1;
    s1.name = "Tony stark";
    s1.researchArea = "Quantum Physics";

    cout<<"Name : "<<s1.name<<endl;
    cout<<"Research Area : "<<s1.researchArea<<endl;
    return 0;
}