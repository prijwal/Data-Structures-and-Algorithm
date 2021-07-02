/**
 * Definition for binary tree
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
vector<vector<int> > Solution::levelOrder(TreeNode* a) {
    vector<vector<int>> ans;
    queue<TreeNode*> q;
    q.push(a);
    while(!q.empty())
    {
        int m=q.size();
        vector<int> temp;
        for(int i=0;i<m;i++)
        {
            TreeNode *curr=q.front();
            q.pop();
            temp.push_back(curr->val);
            if(curr->left!=NULL)
                q.push(curr->left);
            if(curr->right!=NULL)
                q.push(curr->right);
        }
        ans.push_back(temp);
    }
    return ans;
}
