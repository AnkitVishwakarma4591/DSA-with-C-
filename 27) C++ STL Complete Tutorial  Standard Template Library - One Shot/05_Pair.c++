# include <iostream>
# include <vector>
using namespace std;

int main(){
    pair<int,int> p = {5,3};
    pair<char,int> p1 = {'a',3};

    pair<int,pair<char,int>> pp = {5,{'A',18}};

    cout<<p.first<<endl;
    cout<<p.second<<endl;
    cout<<p1.first<<endl;
    cout<<p1.second<<endl;

    cout<<pp.first<<endl;
    cout<<pp.second.first<<endl;
    cout<<pp.second.second<<endl;
    return 0;
}