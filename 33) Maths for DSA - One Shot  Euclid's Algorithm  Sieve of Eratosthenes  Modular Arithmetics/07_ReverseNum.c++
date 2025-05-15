# include <bits/stdc++.h>
using namespace std;

int reverseNum(int n){
    int reNum = 0;
    while(n != 0){
        int rem = n % 10;

        // checking out of bond condition
        if(reNum > INT_MAX/10 || reNum < INT_MIN/10){
            return 0;
        }

        reNum = (reNum * 10) + rem;
        n /= 10;
    }
    return reNum;
}

int main(){
    int n = 4537;
    cout<<reverseNum(n)<<endl;

    return 0;
}