// Following is the Binary Tree node structure
/**************
class BinaryTreeNode {
    public : 
    T data;
    BinaryTreeNode<T> *left;
    BinaryTreeNode<T> *right;

    BinaryTreeNode(T data) {
        this -> data = data;
        left = NULL;
        right = NULL;
    }
};
***************/

void mirrorBinaryTree(BinaryTreeNode<int>* root) 
{
  
  if(root==NULL)
    return;
  BinaryTreeNode<int>*a=root->left;
  BinaryTreeNode<int>*b=root->right;
  root->left=b;
  root->right=a;
  mirrorBinaryTree(root->left);
  mirrorBinaryTree(root->right);


}
