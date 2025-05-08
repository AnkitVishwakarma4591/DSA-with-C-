# include <iostream>
# include <string>
using namespace std;

int main(){
    string str = "Ankit";
    string str1 = "Vishwakarma";

    string str3 = str + str1;

    cout<<str3<<endl;
    cout<<(str == str1)<<endl;
    cout<<(str < str1)<<endl;
    cout<<str.length()<<endl;

    for(char c : str1){
        cout<<c<<" ";
    }

    cout<<endl;
    
    string name;

    getline(cin,name);

    cout<<"Output : "<<name<<endl;

    return 0;

}