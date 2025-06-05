# include <iostream>
# include <string>
using namespace std;

class Teacher{
    public:
    string name;
    double *salaryPtr;

    //Parameterized 
    Teacher(string name, double salary){
    //obj variable   method variable
        this->name = name;
        salaryPtr = new double;
        *salaryPtr = salary;

    }

    //Destructor
    ~Teacher(){
        cout<<"Hi, I delete everythings\n";
        delete salaryPtr;
    }
    
    void getinfo(){
        cout<<"Name : "<<name<<endl;
        cout<<"Salary : "<<*salaryPtr<<endl;
    }
};

int main(){
    Teacher t1("Ankit", 250000);

    t1.getinfo();
    return 0;
}