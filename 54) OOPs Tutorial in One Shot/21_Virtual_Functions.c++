# include <iostream>
using namespace std;

class Parent{
    public:
    void getinfo(){
        cout<<"Parent class\n";
    }
    virtual void hello(){
        cout<<"Hello from parent\n";
    }
};

class Child{
    public:
    void getinfo(){
        cout<<"Child class\n";
    }

    void hello(){
        cout<<"Hello from Child\n";
    }
};

int main(){

    Child c1;
    c1.hello();

    return 0;
}