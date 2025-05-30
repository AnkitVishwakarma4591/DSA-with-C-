# include <iostream>
# include <vector>
using namespace std;

int countInversion(vector<int> arr){ //O(n2)
    int count = 0;
    for(int i = 0 ; i < arr.size() ; i++){
        for(int j = i+1 ; j < arr.size() ; j++){
            if(i < j && arr[i] > arr[j]){
                count++;
            }
        }
    }
    return count;
}

int main(){
    vector<int> arr = {6, 3, 5, 2, 7};

    cout<<countInversion(arr)<<endl;

    return 0;
}