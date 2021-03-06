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
#include<math.h>
int height(BinaryTreeNode<int>* root)
{
  if(root==NULL)
    return 0;
  int x=height(root->left);
  int y=height(root->right);
  
  return max(x,y)+1;
}

int diameter(BinaryTreeNode<int>* root) 
{  
if(root==NULL)
  return 0;
  
  int D3=height(root->left)+height(root->right)+1;
  
  int D2=diameter(root->left);
  int D1=diameter(root->right);
  
  return max(D1,max(D2,D3));
  
}
