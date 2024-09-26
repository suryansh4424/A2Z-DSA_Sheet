void postOder(TreeNode * root, vector<int>&ans){
    if(root==NULL) return;
    postOder(root->left, ans);
    postOder(root->right, ans);
    ans.push_back(root->data);
}

vector<int> postorderTraversal(TreeNode *root){
    vector<int>ans;
    postOder(root,ans);
    return ans;
}
