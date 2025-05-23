# include <iostream>
using namespace std;

int n_Factorial(int n){
    if(n == 0){
        return 1;
    }

    return n * n_Factorial(n-1);
}

int main(){
    int n = 4;
    cout<<n_Factorial(n)<<endl;

    return 0;
}