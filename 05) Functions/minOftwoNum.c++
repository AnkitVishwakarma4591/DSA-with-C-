# include <iostream>
using namespace std;


float Min_of_two_num(float a, float b){   //parameters
    int min;
    if(a>b){
        min = b;
    }
    min = a;

    return min;
}
int main(){
    float min = Min_of_two_num(5.6,9.6); // arguments

    cout<<"Min of Two Number : "<<min<<endl;

    return 0;
}