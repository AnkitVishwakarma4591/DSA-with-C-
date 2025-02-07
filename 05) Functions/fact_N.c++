# include <iostream>
using namespace std;

int N_fact(int n){
    int fact = 1;
    if(n == 0){
        return fact;
    }
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

int main(){
    int n;
    cout<<"Enter Number : ";
    cin>>n;

    int fact = N_fact(n);

    cout<<"Sum of numbers : "<<fact<<endl;
    
    return 0;
}