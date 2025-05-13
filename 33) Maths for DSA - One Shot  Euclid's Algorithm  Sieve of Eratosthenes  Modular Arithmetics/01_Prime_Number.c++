# include <bits/stdc++.h>
using namespace std;

string primeNum(int n){
    for(int i = 2 ; i < n ; i++){
        if(n % i == 0){
            return "Non Prime";
        }
    }
    return "Prime";
}

int main(){
    int n = 18;
    cout<<primeNum(n)<<endl;

    return 0;
}