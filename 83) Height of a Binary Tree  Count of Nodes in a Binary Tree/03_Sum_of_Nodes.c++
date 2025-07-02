
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
void BinaryTree(Node* root){

    if(root == NULL) return;

    cout<<root->data<<" ";

    BinaryTree(root->left);
    BinaryTree(root->right);

}

int sumOfNodes(Node* root){

    if(root == NULL) return 0;

    int leftSum = sumOfNodes(root->left);
    int rightSum = sumOfNodes(root->right);

    return leftSum + rightSum + root->data;
}

int main(){
    vector<int> nums = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};

    Node* root = BuildTree(nums);

    BinaryTree(root);

    cout<<endl;

    cout<<"Sum of Nodes : "<<sumOfNodes(root)<<endl;

    return 0;
}