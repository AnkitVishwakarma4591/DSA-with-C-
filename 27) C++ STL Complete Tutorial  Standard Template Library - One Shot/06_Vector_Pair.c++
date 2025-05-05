# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<pair<int,int>> vec = {{1,2},{2,3},{3,4}};

    vec.push_back({4,5});
    vec.emplace_back(4,5);


    // for(pair<int,int> p : vec){
    //     cout<<p.first<<" "<<p.second<<endl;
    // }
    // or
    for(auto p : vec){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}