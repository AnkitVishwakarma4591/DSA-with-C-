# include <bits/stdc++.h>
using namespace std;

vector<int> twoSum(vector<int> &arr , int tar){
    unordered_map<int,int> m;
    vector<int> ans;

    for(int i = 0 ; i < arr.size() ; i++){
        int first = arr[i];
        int sec = tar - first;

        if(m.find(sec) != m.end()){
            ans.push_back(i);
            ans.push_back(m[sec]);
            break;
        }
        m[first] = i;
    }
    return ans;
}

int main(){
    vector<int> arr = {2,7,11,15};
    int  tar = 9;

    for(int val : twoSum(arr,tar)){
        cout<<val<<" ";
    }

    return 0;
}