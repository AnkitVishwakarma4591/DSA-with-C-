# include <iostream>
using namespace std;

int change(int* p){
    *p *= 2;
    return *p;
}

int change1(int &var){
    var *= 3;
    return var;
}

int main(){
    int a = 5;
    int var = 3;

    cout<<"Before call function a : "<<a<<endl;
    cout<<"Before call function var : "<<var<<endl;

    change(&a);
    change1(var);
    cout<<"after call function a : "<<a<<endl;
    cout<<"after call function var : "<<var<<endl;

    return 0;

}