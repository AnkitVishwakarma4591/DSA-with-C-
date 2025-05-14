# include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    if(b == 0) return a;

    return GCD(b, a % b);
}

int LCM(int a , int b){
    int gcd = GCD(a,b);

    return (a*b)/gcd;
}

int main(){
    int a = 20 , b = 28;

    cout<<LCM(a,b)<<endl;
    cout<<GCD(a,b)<<endl;

    return 0;
}