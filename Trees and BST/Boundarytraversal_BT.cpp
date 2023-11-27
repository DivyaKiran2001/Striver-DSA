#10 Boundary traversals in Binary Search Tree

#Left Boundary Excluding Leaf Nodes
#Leaf Nodes(Using Inorder Traversal)
#Right Boundary Excluding Leaf Nodes

class Solution{
	
	bool isleaf(Node* root){
		if(!root->left && !root->right)
		{
			return true;
		}
	}
	void addLeftB(Node* root,vector<int> &res){
		Node* curr=root->left;
		while(curr){
			if(!isleaf(curr)) res.push_back(root->data);
			if(curr->left) curr=curr->left;
			else curr=curr->right;
		}
	}
	
	void addLeaves(Node* root,vector<int> &res)
	{
		
		if(isleaf(root)) res.push_back(root->data);
		if(root->left) addLeaves(root->left,res);
		if(root->right) addLeaves(root->right,res);
	}
	
	void addRightB(Node* root,vector<int> &res){
		vector<int> temp;
		Node* curr=curr->right;
		while(curr)
		{
			if(!isleaf(curr)) tmp.push_back(root->data);
			if(root->right) curr=curr->right;
			else curr=curr->left;
		}
		for(int i=tmp.size()-1;i--)
		{
			res.push_back(tmp[i]);
		}
	}
	
	vector<int> boundary(Node* root){
		vector<int> res;
		if(isleaf(root)){
			res.push_back(root->data);
		}
		addLeftB(root,res);
		addLeaves(root,res);
		addRightB(root,res);
	}
}