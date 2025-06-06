# include <iostream>
using namespace std;

class A{
    public:
    string name;
    A(){
        cout<<"Non Parameterized"<<endl;
    }

    A(string name){
        this->name  = name;
        cout<<"Parameterized"<<endl;
    }
};

int main(){
    A a1;
    A a2("Ankit");

    return 0;
}