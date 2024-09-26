vector<int> preOrder(TreeNode<int>* root){
    vector<int> pre;
    if(root == nullptr) return pre;
    stack<TreeNode<int>*> st;
    st.push(root);
    
    while(!st.empty()){
        root = st.top();
        st.pop();
        pre.push_back(root->data);
        if(root->right != nullptr){
            st.push(root->right);
        }
        if(root->left != nullptr){
            st.push(root->left);
        }
    }
    return pre;
}
