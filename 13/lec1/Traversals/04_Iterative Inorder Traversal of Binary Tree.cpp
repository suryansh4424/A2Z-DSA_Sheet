#include<bits/stdc++.h>
vector<int> getInOrderTraversal(TreeNode* root) {
    vector<int> inorder;
    if (root == nullptr) return inorder;

    TreeNode* node = root;
    stack<TreeNode*> st;

    while (true) {
        if (node != nullptr) {
            st.push(node);
            node = node->left;
        } else {
            if (st.empty()) break;
            node = st.top();
            st.pop();
            inorder.push_back(node->data);
            node = node->right;
        }
    }
    return inorder;
}
