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

class Teacher : public Person{
    public:
    string subject;
};

int main(){
    Student s1;
    Teacher t1;
    t1.name = "Tony stark";
    s1.rollno = 123;

    cout<<"Name : "<<t1.name<<endl;
    return 0;
}