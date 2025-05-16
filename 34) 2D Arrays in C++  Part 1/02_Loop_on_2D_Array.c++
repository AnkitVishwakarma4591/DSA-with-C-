# include <iostream>
using namespace std;

int main(){
    int row ,col;
    cout<<"Enter row no : "<<endl;
    cin>>row;
    cout<<"Enter col no : "<<endl;
    cin>>col;

    // int matrix[2][2] = {{1,2},{3,4}};
    int matrix[row][col];


    // Input
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<"Enter element ["<<i<<"]"<<"["<<j<<"] : ";
            cin>>matrix[i][j];
        }
        cout<<endl;
    }


    // Output
    for(int i = 0 ; i < row ; i++){
        for(int j = 0 ; j < col ; j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}