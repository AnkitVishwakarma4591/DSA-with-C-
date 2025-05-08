# include <bits/stdc++.h>
using namespace std;

bool isPalindrom(string str){
    int n = str.size();

    int st = 0 , end = n-1;
    bool isPalindrom = false;
    while(st < end){
        if(str[st++] == str[end--]){
            isPalindrom = true;
        }
    }
    return isPalindrom;
}

int main(){
    string str = "racecar";
    cout<<isPalindrom(str)<<endl;

    return 0;
}