int height(Node* node,int& ans)
{
    if(node==NULL)
        return 0;
        
    int left_height=height(node->left,ans);
    int right_height=height(node->right,ans);
    
    ans=max(ans,1+left_height+right_height);
    
    return 1+max(left_height,right_height);
    
}
int diameter(Node* node) {
    int ans=INT_MIN;
    height(node,ans);
    return ans;
}
