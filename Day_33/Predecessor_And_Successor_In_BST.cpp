pair<int,int> predecessorSuccessor(BinaryTreeNode<int>* root, int key)
{
    int pred = -1;
    int succ = -1;
    //Find the node which has the key value
    while(root){
        if(root->data == key)
            break;
        if(root->data > key){
            succ = root->data;	//If there is no right subtree to new root in next line, then previous root is the successor.
            root = root->left;
        }
        else{
            pred = root->data;
            root = root->right;
        }
    }
    BinaryTreeNode<int>* predecessor = root->left;
    BinaryTreeNode<int>* successor = root->right;
    //If there is a left subtree, predecessor will be the rightmost element in left subtree.
    if(predecessor){
        pred = predecessor->data;
        while(predecessor->right){
            predecessor = predecessor->right;
            pred = predecessor->data;
        }
    }
    //If there is a right subtree, successor will be the leftmost element in right subtree.
    if(successor){
        succ = successor->data;
        while(successor->left){
            successor = successor->left;
            succ = successor->data;
        }
    }
    return {pred,succ};
}
