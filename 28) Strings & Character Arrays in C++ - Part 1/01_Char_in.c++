# include <iostream>
using namespace std;

int main(){
    // char str[100];
    // cout<<"Enter char array : ";
    // cin>>str;
    // cout<<str<<endl;

    char str1[6];
    cout<<"Enter char array : ";
    cin.getline(str1,6);
    cout<<str1<<endl;

    for(char c : str1){
        cout<<c<<" ";
    }

    return 0;

}