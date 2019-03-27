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

bool isNodePresent(BinaryTreeNode<int>* root, int x)
{
  
if(root==NULL)
  return 0;
  if(root->data==x)
    return 1;
  bool a=isNodePresent(root->left,x);
  bool b=isNodePresent(root->right,x);
  if(a==1||b==1)
  { 
  return true;
  }
    else
      return false;
}
