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

BinaryTreeNode<int>* maxDataNode(BinaryTreeNode<int>* root)
{
  
  if(root==NULL)
  return root;
  BinaryTreeNode<int>* max=root;
  BinaryTreeNode<int>*max1=maxDataNode(root->left);
  BinaryTreeNode<int>*max2=maxDataNode(root->right);
  if(max1!=NULL&&max->data<max1->data)
  {
    max=max1;
  }
  if(max2!=NULL&&max->data<max2->data)
  {
    max=max2;
  }
  return max;
}
