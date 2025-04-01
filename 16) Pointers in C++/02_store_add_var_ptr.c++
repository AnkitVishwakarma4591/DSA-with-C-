#include <iostream>
#include <vector>
using namespace std;

int main(){
    int a = 10;
    int* ptr = &a;
    cout<<&a<<endl;
    cout<<ptr<<endl;

    // D-refernce pointer
    cout<<*ptr<<endl;

    // pointer tot pointers
    int** parptr = &ptr;
    cout<<&ptr<<endl;
    cout<<parptr<<endl;
    cout<<*parptr<<endl;
    cout<<**parptr<<endl;
    return 0;
}