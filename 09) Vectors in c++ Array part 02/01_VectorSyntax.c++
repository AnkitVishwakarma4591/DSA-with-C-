// # include <bits/stdc++.h>
# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3,5,7};
    cout<<vec[0]<<endl;
    cout<<vec[1]<<endl;
    cout<<vec[2]<<endl;

    // using for each loop
    vector<char> letter = {'a','c','d','e'};

    for(char val : letter){
        cout<<val<<endl;
    }
    return 0;
}