vector<int> levelOrder(TreeNode<int> * root){
    queue<TreeNode<int>*>q;
    q.push(root);
    vector<int>ans;
    while(!q.empty())
    {
        TreeNode<int>*  temp=q.front();
        q.pop();
        ans.push_back(temp->data);
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right)
        {
            q.push(temp->right);
        }
    }
    return  ans;
}


// vector<int> levelOrder(TreeNode<int> *root) {
//     vector<int> ans;
//     if (root == nullptr) {
//         return ans; 
//     }
//     queue<TreeNode<int>*> q;
//     q.push(root);

//     while (!q.empty()) {
//         int size = q.size();
//         vector<int> level;
//         for (int i = 0; i < size; i++) {
//             TreeNode<int> *node = q.front();
//             q.pop();
//             level.push_back(node->data);
//             if (node->left != nullptr) {
//                 q.push(node->left);
//             }
//             if (node->right != nullptr) {
//                 q.push(node->right);
//             }
//         }
//         ans.push_back(level);
//     }
//     return ans; 
// }
