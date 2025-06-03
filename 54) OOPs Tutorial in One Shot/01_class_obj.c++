# include <iostream>
# include <string>
using namespace std;

class Teacher{
    private:
    double salary;

    public:
    string name;
    string dept;
    string sub;

    void changeDept(string newDept){
        newDept = dept;
    }

    //setter
    void setsalary(double s){
        salary = s;
    }

    //getter
    double getsalary(){
        return salary;
    }

};

int main(){
    Teacher t1;
    t1.name = "Ankit";
    t1.dept = "IT";
    t1.sub = "Computer Science";

    cout<<t1.name<<endl;
    cout<<t1.dept<<endl;
    cout<<t1.sub<<endl;

    t1.setsalary(25000);

    cout<<t1.getsalary()<<endl;

    return 0;
}