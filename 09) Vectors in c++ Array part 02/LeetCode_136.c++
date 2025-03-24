// Single Number Question from LeetCode.
# include <iostream>
# include <vector>
using namespace std;

class Solution{
    public:
    int SingleNumber(vector<int> &nums){
        int ans = 0;
        for(int val : nums){
            ans^=val;
        }
        return ans;
    }
};

int main(){
    Solution s1;
    vector<int> nums = {2,2,1};
    cout<<s1.SingleNumber(nums)<<endl;

    return 0;
}