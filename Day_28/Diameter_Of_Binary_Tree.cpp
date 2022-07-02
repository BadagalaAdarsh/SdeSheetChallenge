int solve(TreeNode<int> *root,int &dia){
	if(!root)return -1;
	int left=1+solve(root->left,dia);
	int right=1+solve(root->right,dia);
	dia=max(dia,left+right);
	return max(left,right);
}
int diameterOfBinaryTree(TreeNode<int> *root)
{
	int dia=0;
	solve(root,dia);
	return dia;
}
