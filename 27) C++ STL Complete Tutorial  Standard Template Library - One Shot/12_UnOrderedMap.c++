# include <iostream>
# include <vector>
# include <map>
# include <unordered_map>
using namespace std;

int main(){
    unordered_map<string,int> m;

    m.insert({"tv",50});
    m.emplace("laptop",100);
    m.emplace("fridge",100);
    m.emplace("coolar",100);
    m.emplace("Ac",100);

    // m.erase("laptop"); 
    // m.erase(m.find("laptop")); 

    m.insert({"camera",25});
    m.emplace("charger",70);

    for(auto p : m){
        cout<<p.first<<" "<<p.second<<endl;
    }

    return 0;
}