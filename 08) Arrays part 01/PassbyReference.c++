# include <bits/stdc++.h>
using namespace std;

void passbyReference(int &num){
    num = num*2;
    cout<<"Inside update :"<<num<<endl;
}

int main(){
    int value = 10;
    cout<<"Before Update value : "<<value<<endl;
    passbyReference(value);
    cout<<"After Update value : "<<value<<endl;

    return 0;
    
}