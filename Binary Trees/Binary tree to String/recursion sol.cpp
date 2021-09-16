string tree2str(TreeNode* root,string ans="") {
        if(!root)
            return ans;
        ans+=to_string(root->val);
        if(root->left)
        {
            ans+="(";
            ans+=tree2str(root->left);
            ans+=")";
        }
        else if(root->right)
        {
            ans+="()";
        }
        if(root->right!=NULL)
        {
            ans+="(";
            ans+=tree2str(root->right);
            ans+=")";
        }
        
        return ans;
    }
