#11 Serialize and Deserialize Binary Tree 

#Using Preorder traversal

class Solution{
	vector<int> serialize(Node* root,vector<int> &res);
		if(root==NULL) res.push_back(-1);
		res.push_back(root->data);
		serialize(root->left,res);
		serialize(root->right,res);
	}
	int index=0;
	Node* deserialize(vector<int> &res)
	{
		Node* root=new Node(res[index]);
		int val=res[index];
		index++;
		if(val==-1) return NULL;
		root->left=deserialize(res);
		root->right=deserialize(res);
		return root;
		
	}	
}
