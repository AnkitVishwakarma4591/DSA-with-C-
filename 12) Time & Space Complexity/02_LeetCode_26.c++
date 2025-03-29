# include <bits/stdc++.h>
using namespace std;

int removeDuplicate(vector<int> &nums){

    nums.erase(unique(nums.begin(),nums.end()),nums.end());

    return nums.size();
}

int main(){
    vector<int> nums = {0,0,1,1,1,2,2,3,3,4};

    cout<<removeDuplicate(nums)<<endl;

    return 0;
}