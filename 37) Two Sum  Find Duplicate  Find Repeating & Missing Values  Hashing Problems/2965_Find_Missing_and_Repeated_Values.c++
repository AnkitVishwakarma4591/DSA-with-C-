# include <bits/stdc++.h>
using namespace std;

vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
    vector<int> ans;
    int n = grid.size();
    unordered_set<int> s;
    int a , b;
    int actualSum = 0 , expSum = 0;


    for(int i = 0 ; i < n ; i++){
        for(int j = 0 ; j < n ; j++){
            actualSum += grid[i][j];

            if(s.find(grid[i][j]) != s.end()){
                a = grid[i][j];
                ans.push_back(a);
            }
            s.insert(grid[i][j]);
        }
    }
    expSum = (n*n) * (n*n+1)/2;
    b = expSum + a - actualSum;
    ans.push_back(b);

    return ans;
}

int main(){
    vector<vector<int>> grid = {{1,3},{2,2}};

    for(int val : findMissingAndRepeatedValues(grid)){
        cout<<val<<" ";
    }

    return 0;
}