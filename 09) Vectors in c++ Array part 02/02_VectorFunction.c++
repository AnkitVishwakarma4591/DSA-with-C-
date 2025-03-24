# include <iostream>
# include <vector>
using namespace std;

int main(){
    vector<int> vec;

    // check size
    cout<<"Before push vector size : "<<vec.size()<<endl;

    // Push element in vector
    cout<<"Push elemnets in vector "<<endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(78);
    vec.push_back(85);
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;

    // Pop last elements from the vector 
    cout<<"Pop last from the vector "<<endl;
    vec.pop_back();
    cout<<endl;

    cout<<"Remaining elements "<<endl;
    for(int val : vec){
        cout<<val<<" ";
    }
    cout<<endl;
    cout<<"Front Element of Vector = "<<vec.front()<<endl;
    cout<<endl;

    cout<<"Last Element of Vector = "<<vec.back()<<endl;
    cout<<endl;


    cout<<"Element at index 0 : "<<vec.at(0)<<endl;
    cout<<"Element at index 1 : "<<vec.at(1)<<endl;
    cout<<"Element at index 2 : "<<vec.at(2)<<endl;

    cout<<"After push vector size : "<<vec.size()<<endl;

    return 0;
}