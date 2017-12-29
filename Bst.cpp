#include<bits/stdc++.h>
using namespace std;
struct node
{
   int data;
   node* left;
   node* right;
};


node * create(int x)
{
  node* ptr=new node;
  ptr->left=ptr->right=NULL;
  ptr->data=x;
  return ptr;
}
node* insert(node* root,int x){
  if(root==NULL)
  {
    root=create(x);
  }
  else if(x<=root->data)
     root->left=insert(root->left,x);
  else
     root->right=insert(root->right,x);
  return root;
}
void inorder(node * ptr){
if(ptr==NULL)
 return;

inorder(ptr->left);
cout<<ptr->data<<" ";
inorder(ptr->right);

}

int main(){
node* root=NULL;
root=insert(root,5);
root=insert(root,6);
root=insert(root,7);
root=insert(root,4);
root=insert(root,8);
inorder(root);
}
