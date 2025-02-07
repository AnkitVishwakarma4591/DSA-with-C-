# include <iostream>
using namespace std;

void printPrime(int n){
    
    for(int i=1;i<=n;i++){
        int count = 0;
        for(int j=1;j<=i;j++){
            if(i%j == 0){
                count+=1;
            }
        }
        if(count == 2){
            cout<<i<<" Prime"<<endl;
        }
        else{
            cout<<i<<" Not Prime"<<endl;
        }
    }
}

int main(){
    int num;
    cout<<"Enter number : ";
    cin>>num;

    printPrime(num);
    
    return 0; 
}