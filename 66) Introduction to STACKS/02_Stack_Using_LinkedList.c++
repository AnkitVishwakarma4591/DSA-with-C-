# include <iostream>
# include <list>
using namespace std;

class Stack{
    list<int> ll;

    public:

    void push(int val){
        ll.push_front(val);
    }

    void pop(){
        ll.pop_front();
    }

    int Top(){
        return ll.front();
    }

    bool empty(){
        return ll.size() == 0;
    }
};

int main(){
    Stack S1;
    S1.push(10);
    S1.push(20);
    S1.push(30);

    S1.pop();

    while(!S1.empty()){
        cout<<S1.Top()<<" ";
        S1.pop();
    }

    return 0;
}