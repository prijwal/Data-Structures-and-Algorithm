class Solution{
    public:
    int height(struct Node* node,int h=0){
        if(node==NULL)
            return h;
        return h=max(height(node->left,h+1),height(node->right,h+1));
    }
};
