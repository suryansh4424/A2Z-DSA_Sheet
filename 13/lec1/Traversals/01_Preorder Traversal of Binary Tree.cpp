void pre(TreeNode<int> * root , vector<int>&ans){
    if(root == NULL) return; 
    ans.push_back(root->data);
    pre(root->left , ans);
    pre(root->right, ans);
}

vector<int> preOrder(TreeNode<int> * root){
    vector<int> ans ;
    pre(root , ans);
    return ans;
}
