vector<int> getLevelOrder(BinaryTreeNode<int> *root)
{
    vector<int> ans;
  queue<BinaryTreeNode<int>*> q;
   q.push(root);
   if(root==NULL)
       return ans;
   while(!q.empty())
   {
       BinaryTreeNode<int>* temp = q.front();
       q.pop();
       ans.push_back(temp->val);
       if(temp->left)
           q.push(temp->left);
       if(temp->right)
           q.push(temp->right);
   }
   
   return ans;
   //  Write your code here.
}
