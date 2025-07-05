# include <bits/stdc++.h>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = right = NULL;
    }
};

static int idx = -1;
Node* BuildTree(vector<int> nums){
    idx++;

    if(nums[idx] == -1) return NULL;

    Node* root = new Node(nums[idx]);

    root->left = BuildTree(nums);
    root->right = BuildTree(nums);

    return root;
}

void KthLevel(Node* root, int k){
    if(root == NULL) return;

    if(k == 1){
        cout<<root->data<<" ";
        return;
    }

    KthLevel(root->left, k-1);
    KthLevel(root->right, k-1);
}

int main(){
    vector<int> nums = {1,2,7,-1,-1,-1,3,4,-1,-1,5,-1,-1};
    int k = 3;

    Node* root = BuildTree(nums);

    KthLevel(root,k);

    return 0;
}