# include <iostream>
using namespace std;

class Parent{
    public:
    void getinfo(){
        cout<<"Parent class\n";
    }
};

class Child{
    public:
    void getinfo(){
        cout<<"Child class\n";
    }
};

int main(){

    Child c1; // it override parent class function;
    c1.getinfo();

    Parent p1; // it override child class function;
    p1.getinfo();

    return 0;
}