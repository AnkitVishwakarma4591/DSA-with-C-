/*
A A A A
  B B B
    C C
      D
*/

# include <iostream>
using namespace std;

int main(){
    int n = 4;
    char ch = 'A';

    for(int i=0;i<n;i++){
        for(int j=1;j<=i;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n-i;j++){
            cout<<ch<<" ";
        }
        cout<<endl;
        ch++;
    }

    return 0;
}