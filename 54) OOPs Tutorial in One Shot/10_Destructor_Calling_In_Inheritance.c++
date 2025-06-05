// first call drive class Destructor;
// second call base class Destructor;

# include <iostream>
using namespace std;

class Person{
    public:
    string name;
    int age;

    ~Person(){
        cout<<"Hi, I'm base class Destructor!\n";
    }
};

class Student : public Person{
    public:
    int rollno;

    ~Student(){
        cout<<"Hi, I'm drive class Destructor!\n";
    }

    void getInfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"RollNo : "<<rollno<<endl;
    }
};

int main(){
    Student s1;
    s1.name = "Ankit";
    s1.age = 22;
    s1.rollno = 512;

    s1.getInfo();
    return 0;
}