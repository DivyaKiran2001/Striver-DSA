#9 Zig Zag Traversal(Binary tree)

#We can do zig zag traversal by storing the values in the temp array and bool varaiable

class Solution{
	vector<int> zigzag(Node* root){
		queue<Node*> q;
		bool flag=true;
		vector<int> ans;
		while(!q.empty())
		{
			vector<int> temp;
			for(int i=0;i<q.size();i++)
			{
				Node* root=q.front();
				q.pop();
				temp.push_back(root->data);
				if(root->left){
					q.push(root->left);
				}
				if(root->right){
					q.push(root->right);
				}
			}
			if(!flag){
				reverse(temp.begin(),temp.end());
			}
			for(auto it:temp){
				ans.push_back(it);
			}
			flag=!flag;
			
		}	
		return ans;
	}
}
