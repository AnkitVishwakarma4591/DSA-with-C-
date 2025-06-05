# include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    Person(string name, int age){
        this-> name  = name;
        this->age = age;
        cout<<"Hi, I'm base class!\n";
    }
};

class Student : public Person{
    public:
    int rollno;

    Student(string name, int age, int rollno):Person(name,age){
        this->rollno = rollno;
        cout<<"Hi, I'm drive class!\n";
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"RollNo : "<<rollno<<endl;
    }
};

int main(){
    Student s1("Ankit",22,2135);

    s1.getInfo();
    return 0;
}