// Find the key in the given 2D Array and return its row & col value in pair

# include <bits/stdc++.h>
using namespace std;

vector<pair<int,int>> findKey(vector<vector<int>> &matrix ,int key){
    int row = matrix.size();
    int col = matrix[0].size();

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(matrix[i][j] == key){
                return {{i,j}};
            }
        }
    }
    return {{-1,-1}};
}

int main(){
    vector<vector<int>> matrix = {{1,2,3},{4,5,6},{7,8,9},{11,12,13}};
    int key  = 12;

    vector<pair<int,int>> position = findKey(matrix,key);
    
    cout<<position[0].first<<" "<<position[0].second<<endl;

    return 0;

}