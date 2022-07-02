vector<int> parent(10001,-1);
void dfs(TreeNode<int> *root, int x,int par){
    if(root!=NULL){
        parent[root->data]=par;
        if(root->data==x) return;
        dfs(root->left,x,root->data);
        dfs(root->right,x,root->data);
    }
}

vector<int> pathInATree(TreeNode<int> *root, int x)
{
    
    dfs(root,x,-1);
    vector<int> path;
    while(x!=-1){
        path.push_back(x);
        x=parent[x];
    }
    reverse(begin(path),end(path));
    return path;
}
