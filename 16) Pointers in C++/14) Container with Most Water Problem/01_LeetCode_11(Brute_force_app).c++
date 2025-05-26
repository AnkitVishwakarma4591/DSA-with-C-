# include <bits/stdc++.h>
using namespace std;

int maxArea(vector<int> &height){
    int maxWater = 0;
    int n = height.size();
    
    for(int i=0 ; i<n ; i++){
        for(int j=i+1; j<n ; j++){
            int w = j-i;
            int ht = min(height[i],height[j]);
            int currWater = w * ht;
            maxWater = max(maxWater,currWater);
        }
    }
    return maxWater;
}

int main(){
    vector<int> height = {1,8,6,2,5,4,8,3,7};

    cout<<maxArea(height)<<endl;
}