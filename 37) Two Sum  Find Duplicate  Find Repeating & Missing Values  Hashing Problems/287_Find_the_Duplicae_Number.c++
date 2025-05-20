    # include <bits/stdc++.h>
    using namespace std;

    int findDuplicate(vector<int>& nums) {

        unordered_set<int> s;

        for(auto val : nums){
            if(s.find(val) != s.end()){
                return val;
            }
            s.insert(val);
        }
        return -1;
        
    }

    int main(){
        vector<int>nums = {1,3,4,2,2};
        cout<<findDuplicate(nums)<<endl;

        return 0;
    }