# include <iostream>
# include <string>
using namespace std;

int main(){
    string str = "Ankit vishwakarma";
    
    for(int i = 0 ; i < str.length() ; i++){
        cout<<str[i]<<" ";
    }

    cout<<endl;

    for(auto c : str){
        cout<<c<<" ";
    }

    return 0;

}