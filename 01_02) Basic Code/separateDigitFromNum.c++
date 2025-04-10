# include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    while(n>0){
        int ld = n % 10;
        cout<<ld<<endl;
        n = n/10;
    }
    return 0;
}