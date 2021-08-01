vector <int> zigZagTraversal(Node* root)
{
    vector<int> ans;
	queue<Node*> q;
	q.push(root);
	bool ok=true;
	while(!q.empty())
	{
	    int n=q.size();
	    vector<int> t_ans;
	    for(int i=0;i<n;i++)
	    {
	         Node* curr=q.front();
	         q.pop();  
	         t_ans.push_back(curr->data);
	         if(curr->left!=NULL)
	             q.push(curr->left);
	         if(curr->right!=NULL)
	             q.push(curr->right);
	     }
	     ok=!ok;
	     if(ok)
	        reverse(begin(t_ans),end(t_ans));
	     for(int i=0;i<n;i++)
	        ans.push_back(t_ans[i]);
	}
	return ans;
}
