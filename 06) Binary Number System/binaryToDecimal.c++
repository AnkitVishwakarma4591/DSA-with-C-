# include<iostream>
using namespace std;

void binaryToDecimal(int n){
    int ans = 0;
    int p = 1;
    while(n > 0){
        int rem = n%2;
        n = n/2;
        ans += rem*p;
        p = p*2;
    }
    cout<<"Binary Number : "<<ans<<endl;
}
int main(){
    int n;
    cout<<"Enter Decimal Number : ";
    cin>>n;
    binaryToDecimal(n);

    return 0;
}