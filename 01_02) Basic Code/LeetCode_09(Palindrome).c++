# include <iostream>
using namespace std;

bool isPalindrome(int x){
    bool istrue;
    int original = x;
    long long revNum = 0;

    if(original < 0) return false;
    
    while(x != 0){
        int ld = x%10;
        revNum = (revNum * 10) + ld;
        x /= 10;
    }

    if(original == revNum){
        istrue = true;
    }else{
        istrue = false;
    }
    
    return istrue;
}

int main(){
    cout<<isPalindrome(121)<<endl;
    cout<<isPalindrome(-121)<<endl;
    cout<<isPalindrome(10)<<endl;
    cout<<isPalindrome(152)<<endl;

    return 0;
}