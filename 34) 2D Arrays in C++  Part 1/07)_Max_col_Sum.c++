# include <bits/stdc++.h>
using namespace std;

int maxcolSum(vector<vector<int>> &mat){
    int m = mat.size() , n = mat[0].size();

    int max_sum = 0;

    for(int j = 0 ; j < n ; j++){
        int sum = 0;
        for(int i = 0 ; i < m ; i++){
            sum += mat[i][j];
        }

        max_sum = max(max_sum,sum);
    }

    return max_sum;
} 

int main(){
    vector<vector<int>> mat = {{1,2,3},{4,5,6},{7,8,9}};

    cout<<maxcolSum(mat)<<endl;

    return 0;
}