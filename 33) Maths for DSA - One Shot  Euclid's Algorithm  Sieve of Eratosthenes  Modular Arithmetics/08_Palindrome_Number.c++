# include <bits/stdc++.h>
using namespace std;

bool palindromeNum(int n){
    int copyN = n;
    int revNum = 0;

    if(n < 0) return 0;
    
    while(n != 0){
        int rem = n % 10;
        revNum = (revNum * 10) + rem;
        n /= 10;
    }
    return copyN == revNum;
}

int main(){
    int n = 121;
    cout<<palindromeNum(n)<<endl;

    return 0;
}