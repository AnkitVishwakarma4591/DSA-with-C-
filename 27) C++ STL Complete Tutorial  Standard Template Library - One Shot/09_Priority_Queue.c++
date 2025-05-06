# include <iostream>
# include <vector>
# include <queue>
using namespace std;

int main(){
    // priority_queue<int> p;
    priority_queue<int,vector<int>,greater<int>> p; //if we want to print output in ascending order
    p.push(5);
    p.push(3);
    p.push(10);
    p.push(4);

    while(!p.empty()){
        cout<<p.top()<<" ";
        p.pop();
    }
    return 0;
}