# include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;

    int count = 0;
    for(int i=1;i<=a;i++){
        if(a%i == 0){
            count+=1;
        }
    }
    
    if(count == 2){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not prime";
    }
    return 0;
}