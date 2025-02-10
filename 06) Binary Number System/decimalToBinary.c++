# include<iostream>
#include<cmath>
using namespace std;

void decimalToBinary(int n){
    int ans = 0;
    int p = 1;
    while(n > 0){
        int rem = n%2;
        n = n/2;
        ans += rem*p;
        p = p*10;
        

    }
    cout<<"Binary Number : "<<ans<<endl;
}
int main(){
    int n;
    cout<<"Enter Decimal Number : ";
    cin>>n;

    decimalToBinary(n);
    // for(int i=1 ; i<=10;i++){
    //     decimalToBinary(i);
    // }

    return 0;
}