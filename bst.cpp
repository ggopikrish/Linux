#include<bits/stdc++.h>
using namespace std;

struct node
{
    int data;
    struct node *left;
    struct node *right;

}*root,*temp,*dis;
int val;
void inorder(struct node *dis)
{
      //cout<<"hai";
     if (dis == NULL) return ;
 
     inorder(dis->left);
     
     cout<<dis->data;
 
     inorder(dis->right);
     

    // return 0;

}
void pre(struct node *dis)
{
      //cout<<"hai";
     if (dis == NULL) return ;
 
    cout<<dis->data;
     pre(dis->left);
     pre(dis->right);
     

    // return 0;

}
void post(struct node *dis)
{
      //cout<<"hai";
     if (dis == NULL) return ;
 
     post(dis->left);
     post(dis->right);
     cout<<dis->data;
     
}

int main()
{  int n,cho;cin>>n;
    struct node *node,*temp,*cur;
    while(n--)
  {
    
    node=(struct node*)malloc(sizeof(struct node));
    cin>>val;
    //temp=node;
    
    if(root==NULL)
    {      node->data=val;
           node->left=NULL;
           node->right=NULL;
           temp=node;
           root=node;
           
    }
    else
    {
        if(val<temp->data)
        {
            node->data=val;
            temp->left=node;
            node->left=NULL;
            node->right=NULL;
            temp=node;
        }
        else if(val>temp->data)
        {
            node->data=val;
            temp->right=node;
            node->left=NULL;
            node->right=NULL;
            temp=node;

        }
    }
 }
   cout<<"1.inorder,2.preorder,3.postorder";
   cin>>cho;
   switch(cho)
   {
     case 1:inorder(root); break;
     case 2:pre(root);break;
     case 3:post(root);break;
     default: cout<<"invalid choice";break; 
   }
    return 0;
}
