# include <iostream>
# include <string>
using namespace std;

class Teacher{
    public:

    string name;
    string dept;
    double salary;

    Teacher(string n, string d, double s){
        name = n;
        dept = d;
        salary = s;
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