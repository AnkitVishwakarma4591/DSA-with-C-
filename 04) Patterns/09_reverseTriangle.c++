/*
A
B A
C B A
D C B A
*/
# include <iostream>
using namespace std;

int main(){
    int n = 4;
    char ch = 'A';

    for(int i=1;i<=n;i++){
        char ch1 = ch;
        for(int j=1;j<=i;j++){
            cout<<ch1<<" ";
            ch1--;
        }
        ch++;
        cout<<endl;
    }

    return 0;
}