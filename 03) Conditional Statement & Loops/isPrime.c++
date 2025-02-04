# include <iostream>
using namespace std;

int main(){
    int num;
    bool isprime = true;
    cout<<"Enter number : ";
    cin>>num;
    for(int i=2;i<=num-1;i++){
        if(num%i == 0){
            isprime = false;
            break;
        }
    }
    if(isprime == true){
        cout<<num<<" is prime"<<endl;
    }
    else{
        cout<<num<<" not prime"<<endl;
    }

    return 0;
}