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

void preOrder(Node* root){
    if(root == NULL) return;

    cout<<root->data<<" ";
    preOrder(root->left);
    preOrder(root->right);
}

int sumTree(Node* root){
    if(root == NULL) return 0;

    int leftSum = sumTree(root->left);
    int rightSum = sumTree(root->right);

    root->data += leftSum + rightSum;

    return root->data;
}

int main(){

    vector<int> nums = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = BuildTree(nums);

    cout<<"Before Conversion : ";
    preOrder(root);
    cout<<endl;

    sumTree(root);

    cout<<"After Conversion: ";
    preOrder(root);
    cout<<endl;

    return 0;
}