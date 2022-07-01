void postOrder(vector<int> &v,TreeNode* root){
    if(root==NULL){
        return;
    }
    postOrder(v, root->left);
    postOrder(v, root->right);
    v.push_back(root->data);
}
vector<int> getPostOrderTraversal(TreeNode *root)
{
    vector<int> result;
    postOrder( result, root);
    return result;
}
