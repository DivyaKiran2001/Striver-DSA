#8 BFS(Level Order Traversal)

class Solution{
	vector<int> levelorder(Node* root){
		queue<Node*> q;
		q.push(node);
		vector<int> res;
		while(!q.empty())
		{
			Node* root=q.front();
			q.pop();
			res.push_back(root->data);
			if(root->left){
				q.push(root->left);
			}
			if(root->right){
				q.push(root->right);
			}
		}
		return res;
	}
}