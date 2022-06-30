void inOrder(vector<int> &ans, TreeNode* root){
    if(root==NULL){
        return;
    }
    inOrder(ans, root->left);
    ans.push_back(root->data);
    inOrder(ans, root->right);
}
vector<int> getInOrderTraversal(TreeNode *root)
{   
    vector<int> ans;
    inOrder(ans, root);
    return ans;
}
