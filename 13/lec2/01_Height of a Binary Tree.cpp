int findMaxDepth(TreeNode<int> *root) 
{
	//Write your code here. 
    if (root==NULL) return 0;
    int lh = findMaxDepth(root->left);
    int rh = findMaxDepth(root->right);

    return 1 + max(lh,rh);
} 
