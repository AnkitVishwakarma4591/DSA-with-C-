# include <iostream>
using namespace std;

bool checkPrime(int n){
    bool isTure = true;

    for(int i=2;i<=n-1;i++){
        if(n%i == 0){
            isTure = false;
        }
    }
    return isTure;
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    cout<<"Number is Prime : "<<checkPrime(num)<<endl;
    
    return 0; 
}