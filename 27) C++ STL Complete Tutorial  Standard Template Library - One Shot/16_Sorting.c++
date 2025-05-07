# include <iostream>
# include <bits/stdc++.h>
# include <vector>
using namespace std;

int main(){
    int arr[] = {5,6,7,1,2,3};
    vector<int> vec = {5,6,7,1,2,3};
    sort(arr,arr+6);
    sort(vec.begin(),vec.end(),greater<int>());

    for(int val : arr){
        cout<<val<<" ";
    }
    cout<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}