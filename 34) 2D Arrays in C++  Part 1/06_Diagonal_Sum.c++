# include <bits/stdc++.h>
using namespace std;

// int diagonalSum(int mat[][3] , int n){ //O(n*n)
//     int sum = 0;

//     for(int i = 0 ; i < n ; i++){
//         for(int j = 0 ; j < n ; j++){
//             if(i == j || j == n-i-1){
//                 sum += mat[i][j];
//             }
//         }
//     }
//     return sum;
// }

int diagonalSum(int mat[][3] , int n){ //O(n)
    int sum = 0;

    for(int i = 0 ; i < n ; i++){
        sum += mat[i][i];

        if(i != n-i-1){
            sum += mat[i][n-i-1];
        }
    }
    return sum;
}

int main(){
    int mat[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    cout<<diagonalSum(mat,3)<<endl;

    return 0;
}