Node* constructTree(string &s)
{

	int n=s.length();
	Node* root = new Node(s[0]-'0');
  
	stack<Node*> stk;
  
	for (int i=1;i<n;i++) 
  {
		if (s[i]=='(')
			stk.push(root);
		else if(s[i]==')')
    {
      root = stk.top();
			stk.pop();
    }
		else 
    {
			if(!root->left) 
      {
				Node* left = new Node(s[i] - '0');
				root->left = left;
				root = root->left;
			}
			else if(!root->right) 
      {
				Node* right = new Node(s[i] - '0');
				root->right = right;
				root = root->right;
		  }
		}
	}
	return root;
}

Time Complexity: O(N)
Auxiliary Space: O(N)
