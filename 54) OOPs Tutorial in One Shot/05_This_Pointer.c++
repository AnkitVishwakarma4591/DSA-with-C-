# include <iostream>
# include <string>
using namespace std;

class Teacher{
    public:

    string name;
    string dept;
    double salary;

    Teacher(string name, string dept, double salary){

    //obj variable   method variable
        this->name = name;
        this->dept = dept;
        this->salary = salary;
    }

    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Department : "<<dept<<endl;
        cout<<"Salary : "<<salary<<endl;
    }
};

int main(){
    Teacher t1("Ankit", "IT", 250000);
    t1.getinfo();
    return 0;
}