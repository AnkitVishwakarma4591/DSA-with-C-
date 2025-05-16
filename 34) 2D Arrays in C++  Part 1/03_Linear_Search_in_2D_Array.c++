# include <iostream>
using namespace std;

bool linearSearch(int mat[][3] ,int row, int col, int key){

    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            if(mat[i][j] == key){
                return true;
            }
        }
    }
    return false;
}

int main(){
    int mat[4][3] = {{1,2,3},{4,5,6},{7,8,9},{11,12,13}};
    int row = 4;
    int col = 3;
    int key = 12;
    cout<<linearSearch(mat,row,col,key)<<endl;
    return 0;
}