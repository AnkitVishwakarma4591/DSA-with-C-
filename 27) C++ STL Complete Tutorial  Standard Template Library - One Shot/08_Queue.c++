# include <iostream>
# include <vector>
# include <queue>
using namespace std;

int main(){
    queue<int> q;

    q.push(1);
    q.push(2);
    q.push(3);

    // queue<int> q2;
    // q2.swap(q);
    while(!q.empty()){
        cout<<q.front()<<endl;
        q.pop();
    }
    // cout<<"Size of q :"<<q.size()<<endl;
    // cout<<"Size of q2 :"<<q2.size()<<endl;
    return 0;
}