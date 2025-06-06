# include <iostream>
using namespace std;

class Print{
    public:
    string name;


    void show(int x){
        cout<<"int : "<<x<<endl;
    }

    void show(char ch){
        cout<<"char : "<<ch<<endl;
    }
};

int main(){
    Print p1;
    p1.show(12);
    p1.show('A');

    return 0;
}