# include <iostream>
using namespace std;

int main(){
    char ch;
    cout<<"Enter character : ";
    cin>>ch;

    if(ch >= 'a' && ch<= 'z'){
        cout<<"LowerCase";
    }
    else if(ch >= 'A' && ch<= 'Z'){
        cout<<"UpperCase"<<endl;
    }
    else{
        cout<<"Invalid input "<<endl;
    }

    // cin>>ch;
    // int a = ch;
    // cout<<a<<endl;
    return 0;
    
}