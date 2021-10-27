#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left;
    Node *right;
    Node(int data)
    {
        this->data=data;
        left=NULL;
        right=NULL;
    }
};
int search(int arr[], int start, int end, int target)
{
    for(int i=start;i<=end;i++)
    {
        if(arr[i]==target)
            return i;
    }

    return -1;
}
Node* buildTree_pre_in(int preorder[], int inorder[], int start, int end)
{
    static int idx=0;
    if(start > end )
        return NULL;
    
    int curr=preorder[idx];
    Node* node= new Node(curr);
    idx++;
    
    if(start == end )
        return node;
        
    int pos=search(inorder, start , end, curr);
    
    node->left=buildTree_pre_in(preorder, inorder, start , pos-1);
    node->right=buildTree_pre_in(preorder, inorder, pos+1, end);

    return node;
}

Node* buildTree_post_in(int postorder[], int inorder[], int start, int end)
{
    static int index=4;
    if(start > end )
        return NULL;
    
    int val=postorder[index];
    Node* node= new Node(val);
    index--;
    
    if(start == end )
        return node;
        
    int pos=search(inorder, start , end, val);
    
    node->right=buildTree_post_in(postorder, inorder, pos+1, end);
    node->left=buildTree_post_in(postorder, inorder, start , pos-1);
    
    return node;
    
}
void inorderPrint(Node* root)
{
    if(root== NULL)
        return ;
    inorderPrint(root->left);
    
    cout<< root->data<<" ";
    
    inorderPrint(root->right);
}
int main(){
    
    int preorder[]={1,2,4,3,5};
    int inorder[]={4,2,1,5,3};
    int postorder[]={4,2,5,3,1};
    
    Node *root;
    root=buildTree_post_in(postorder,inorder,0,4);
    inorderPrint(root);
    
    cout<<"\n"; 
    
    root=buildTree_pre_in(preorder,inorder,0,4);
    inorderPrint(root);
    return 0;
}
