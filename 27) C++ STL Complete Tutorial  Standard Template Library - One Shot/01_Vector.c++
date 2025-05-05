# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<int> vec = {1,2,3};

    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.emplace_back(5);
    
    cout<<vec.size()<<endl;
    cout<<vec.capacity()<<endl;
    vec.pop_back();

    cout<<vec.front()<<endl;
    cout<<vec.back()<<endl;


    for(int val : vec){
        cout<<val<<" ";
    }
    return 0;
}