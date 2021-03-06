// Following is the Binary Tree node structure
/**************
class BinaryTreeNode
{
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
 
 // PairAns class -
 class PairAns {
    public :
        int min;
        int max;
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
BinaryTreeNode<int>* minDataNode(BinaryTreeNode<int>* root) 
{
    
  if(root==NULL)
  return root;
  BinaryTreeNode<int>* max=root;
  BinaryTreeNode<int>*max1=minDataNode(root->left);
  BinaryTreeNode<int>*max2=minDataNode(root->right);
  if(max1!=NULL&&max->data>max1->data)
  {
    max=max1;
  }
  if(max2!=NULL&&max->data>max2->data)
  {
    max=max2;
  }
  return max;
}



PairAns minMax(BinaryTreeNode<int> *root) 
{
  PairAns p;
  BinaryTreeNode<int> *max=maxDataNode(root);
  BinaryTreeNode<int> *min=minDataNode(root);
  p.min=min->data;
  p.max=max->data;
  return p;
}
