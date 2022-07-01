vector<int> getPreOrderTraversal(TreeNode *root)
{
   vector<int> ans;
   if(root==NULL) return ans;
   stack<TreeNode *> s;
   s.push(root);
   while(!s.empty()){
       root=s.top();
       s.pop();
       ans.push_back(root->data);
       if(root->right!=NULL) s.push(root->right);
       if(root->left!=NULL) s.push(root->left);
   }
   return ans;
}
