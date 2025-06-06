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

class Professor : public Teacher{
    public:
    string degreeholder;
};

int main(){
    
    Professor t1;
    t1.name = "Tony stark";
    t1.age = 45;
    t1.subject = "Chemistry";
    t1.degreeholder = "Chemical";
    
    Student s1;
    s1.rollno = 123;

    cout<<"Name : "<<t1.name<<endl;
    return 0;
}