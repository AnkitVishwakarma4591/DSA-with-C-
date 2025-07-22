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

class info{
    public:
    int min, max, sz;

    info(int mi, int ma, int size){
        min = mi;
        max = ma;
        sz = size;
    }
};

info helper(Node* root){
    if(root == NULL){
        return info(INT_MAX, INT_MIN, 0);
    }

    info left = helper(root->left);
    info right = helper(root->right);

    if(root->data > left.max && root->data < right.min){
        int currMin = min(root->data, left.min);
        int currMax = max(root->data, right.max);
        int currSz = left.sz + right.sz + 1;

        return info(currMin, currMax, currSz);
    }

    return info(INT_MIN, INT_MAX, max(left.sz, right.sz));
}

int largestBSTinBT(Node* root){
    info Info = helper(root);
    return Info.sz;
}

int main(){
    Node* root = new Node(10);
    root->left = new Node(5);
    root->right = new Node(15);
    root->left->left = new Node(1);
    root->left->right = new Node(8);
    root->right->right = new Node(7);

    cout<< largestBSTinBT(root)<<endl;

    return 0;
}