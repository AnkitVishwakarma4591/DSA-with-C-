# include <bits/stdc++.h>
using namespace std;

int GCD(int a , int b){

    while(a > 0 && b > 0){
        if(a > b){
            a = a % b;
        }else{
            b = b % a;
        }
    }
    if(a == 0) return b;
    return a;
}

// Using recursion

int GCDRECURSION(int a , int b){
    if(b == 0) return a;

    return GCDRECURSION(b, a % b);
}

int main(){
    int a = 20 , b = 20;
    cout<<GCD(a,b)<<endl;

    return 0;
}