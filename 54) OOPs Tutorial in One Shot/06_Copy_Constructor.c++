# include <iostream>
# include <string>
using namespace std;

class Teacher{
    public:

    string name;
    string dept;
    double salary;

    //Parameterized 
    Teacher(string name, string dept, double salary){
    //obj variable   method variable
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }

    //copy constructor
    Teacher(Teacher &orgObj){
        cout<<"I am custom copy constructor...\n";
        this->name = orgObj.name;
        this->dept = orgObj.dept;
        this->salary = orgObj.salary;
    }
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main(){
    Teacher t1("Ankit", "IT", 250000);

    Teacher t2(t1);

    //using second obj calling getinfo method;
    t2.getinfo();
    return 0;
}