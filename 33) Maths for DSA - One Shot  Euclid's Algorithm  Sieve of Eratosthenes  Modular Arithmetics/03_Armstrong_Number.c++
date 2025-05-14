# include <bits/stdc++.h>
using namespace std;

bool isArmstrong(int n){
    int copyN = n;
    int sumOfCubes = 0;

    while(n != 0){
        int rem = n % 10;
        sumOfCubes += (rem * rem * rem);

        n/=10;
    }
    return sumOfCubes == copyN;
}

int main(){
    int n = 371;
    if(isArmstrong(n)){
        cout<<n<<" is an Armstrong"<<endl;
    }else{
        cout<<n<<" not an Armstrong"<<endl;
    }

    return 0;
}