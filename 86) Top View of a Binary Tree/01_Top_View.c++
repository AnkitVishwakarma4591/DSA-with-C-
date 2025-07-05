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
// Top view of Binary Tree
void topView(Node* root){
    queue<pair<Node*, int>> q; //(Node , HD)
    map<int, int> m; // (HD, Node Val)
    q.push({root, 0});

    while(q.size() > 0){
        Node* curr = q.front().first;
        int currHD = q.front().second;
        q.pop();

        if(m.find(currHD) == m.end()){
            m[currHD] = curr->data;
        }
        
        if(curr->left != NULL){
            q.push({curr->left, currHD-1});
        }

        if(curr->right != NULL){
            q.push({curr->right, currHD+1});
        }
    }

    for(auto it : m){
        cout<<it.second<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> nums = {1,2,-1,-1,3,4,-1,-1,5,-1,-1};

    Node* root = BuildTree(nums);

    preOrder(root);
    cout<<endl;

    topView(root);

    return 0;
}