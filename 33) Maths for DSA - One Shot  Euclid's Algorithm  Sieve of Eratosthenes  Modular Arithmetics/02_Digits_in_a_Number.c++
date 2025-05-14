# include <bits/stdc++.h>
using namespace std;

// print digits of number.
void printDigits(int n){
    while(n > 0){
        int rem = n % 10;
        cout<<rem<<" ";
        n = n/10;
    }
}

// count total number of digits in Number.
int countDigits(int n){
    int count = 0;
    while(n > 0){
        int rem = n % 10;
        count++;
        n = n/10;
    }
    return count;
}

// Sum of digits in a Number.
int sumDigits(int n){
    int sum = 0;
    while(n > 0){
        int rem = n % 10;
        sum += rem;
        n = n/10;
    }
    return sum;
}


int main(){
    int n = 3586;
    
    printDigits(n);
    cout<<endl;
    cout<<countDigits(n)<<endl;
    cout<<sumDigits(n)<<endl;
    
    return 0;
}