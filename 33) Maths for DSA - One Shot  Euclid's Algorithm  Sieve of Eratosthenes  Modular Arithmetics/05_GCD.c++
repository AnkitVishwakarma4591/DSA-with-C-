# include <bits/stdc++.h>
using namespace std;

int GCD(int a, int b){
    int range = min(a,b);
    int gcd = 1;
    if(a == 0)  return gcd = b;
    if(b == 0) return gcd = a;
    if(a == b) return gcd = a;
    for(int i = 2 ; i <= range ; i++){
        if(a % i == 0 && b % i ==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int a = 20 , b = 28;
    cout<<GCD(a,b)<<endl;

    return 0;
}