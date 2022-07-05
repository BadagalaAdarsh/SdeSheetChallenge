#include<bits/stdc++.h>

void connectNodes(BinaryTreeNode< int > *root) {
    // Write your code here.
      if(root==NULL)
          return;
        
        queue<BinaryTreeNode<int> *>q;
        q.push(root);
        
        while(!q.empty())
        {
            int n=q.size();
            
            for(int i=0;i<n;i++)
            {
                BinaryTreeNode<int> *temp=q.front();
                q.pop();
                
                if(i==n-1)
                {
                    temp->next=NULL;
                }
                else
                {
                    temp->next=q.front();
                }
                
                if(temp->left!=NULL)
                    q.push(temp->left);
                if(temp->right!=NULL)
                    q.push(temp->right);
            }
        }
}
