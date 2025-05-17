# include <iostream>
# include <vector>
# include <bits/stdc++.h>
using namespace std;

int maxRowSum(int matrix[][3] , int row ,int col){
    int sum = 0;
    int Max = INT_MIN;

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            sum += matrix[i][j];
        }
        Max = max(Max,sum);
        sum = 0;
    }
    return Max;
}

int main(){
    int matrix[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int row = 3;
    int col = 3;

    cout<<maxRowSum(matrix,row,col)<<endl;
    return 0;
}