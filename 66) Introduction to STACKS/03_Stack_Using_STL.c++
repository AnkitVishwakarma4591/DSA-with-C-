# include <iostream>
# include <stack>
using namespace std;

int main(){
    stack<int> S1;
    S1.push(10);
    S1.push(20);
    S1.push(30);

    S1.pop();

    while(!S1.empty()){
        cout<<S1.top()<<" ";
        S1.pop();
    }

    return 0;
}