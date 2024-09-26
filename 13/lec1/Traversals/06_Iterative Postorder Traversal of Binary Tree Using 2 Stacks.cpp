#include<bits/stdc++.h>
vector<int> postorderTraversal(TreeNode* root) {
    vector<int> postorder;
    if (root == nullptr) return postorder;
    stack<TreeNode*> st1 , st2;
    st1.push(root);

    while (!st1.empty()) {
        root = st1.top();
        st1.pop();
        st2.push(root);
        if(root->left != NULL){
            st1.push(root->left);
        }
        if(root->right != NULL){
            st1.push(root->right);
        }
    }
    while(!st2.empty()){
        postorder.push_back(st2.top()->data);
        st2.pop();
    }
    return postorder;
}
