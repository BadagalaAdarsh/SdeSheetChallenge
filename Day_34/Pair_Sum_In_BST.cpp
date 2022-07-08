#include<stack>
typedef BinaryTreeNode<int> node;

bool pairSumBst(node *root, int k){
    stack<node*> inc, dec;
    node *r1 = root, *r2 = root;
    while((!inc.empty() || r1) && (!dec.empty() || r2)){
        while(r1)
            inc.push(r1), r1 = r1->left;
        while(r2)
            dec.push(r2), r2 = r2->right;
        node *a = inc.top(), *b = dec.top();
        if(a->data + b->data == k)
            return true;
        if(a->data + b->data > k){
            dec.pop();
            r2 = b->left;
        }else{
            inc.pop();
            r1 = a->right;
        }
    }
    return false;
}
