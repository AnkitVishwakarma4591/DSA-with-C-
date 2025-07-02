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

//preOrder
void preOrder(Node* root){

    if(root == NULL) return;

    cout<<root->data<<" ";

    preOrder(root->left);
    preOrder(root->right);

}

int Height(Node* root){

    if(root == NULL) return 0;

    int leftHt = Height(root->left);
    int rightHt = Height(root->right);

    return max(leftHt, rightHt) +1;
}

int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = BuildTree(nums);

    preOrder(root);

    cout<<endl;

    cout<<"Height : "<<Height(root)<<endl;

    return 0;
}