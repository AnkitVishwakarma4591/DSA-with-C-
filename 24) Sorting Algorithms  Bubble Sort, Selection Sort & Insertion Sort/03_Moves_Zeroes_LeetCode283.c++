
#include <iostream>
#include <vector>
using namespace std;

// BruteForce Solution

void bruteForceSol(vector<int> &nums)
{

    vector<int> temp;

    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] != 0)
        {
            temp.push_back(nums[i]);
        }
    }

    for (int i = 0; i < temp.size(); i++)
    {
        nums[i] = temp[i];
    }

    for (int i = temp.size(); i < nums.size(); i++)
    {
        nums[i] = 0;
    }

    for (int val : nums)
    {
        cout << val << " ";
    }
}

void optimalSol(vector<int> &nums)
{
    int i = -1, n = nums.size();
    for (int j = 0; j < n; ++j)
    {
        if (nums[j])
        {
            swap(nums[++i], nums[j]);
        }
    }

    for(int val : nums){
        cout<<val<<" ";
    }
}

int main()
{
    vector<int> nums = {0, 1, 0, 3, 12}; // {1,3,12,0,0}

    bruteForceSol(nums);
    cout<<endl;
    optimalSol(nums);

    return 0;
}