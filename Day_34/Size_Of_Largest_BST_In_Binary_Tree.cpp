struct res {
    int size;
    int min;
    int max;
    
    res(int sz, int mn, int mx)
    {
        size = sz;
        min = mn;
        max = mx;
    }
};

res helper(TreeNode<int>* root)
{
    if (!root)
    {
        res result(0,INT_MAX,INT_MIN);
        return result;
    }
    res leftres = helper(root->left);
    res rightres = helper(root->right);
    
    if (leftres.max < root->data && root->data < rightres.min)
    {
        res result(leftres.size+rightres.size+1,min(leftres.min,root->data),
                  max(root->data,rightres.max));
        return result;
    }
    else
    {
        res result(max(leftres.size,rightres.size),INT_MIN,INT_MAX);
        return result;
    }
}

int largestBST(TreeNode<int>* root) 
{
    res result = helper(root);
    return result.size;
}
