#2 Right View of Binary tree/Left View 


#Right View --> Can be done using Reverse Preorder traversal (Root Right Left)
#Left View  --> Can be done using Preorder traversal (Root Left Right)

class Solution{
	private:
		Node* preorder(Node* root,int level,vector<int> &res){
			if(root==NULL) return;
			if(level==res.size()){
				res.push(root->data);
			}
			preorder(root->right,level+1);
			preorder(root->left,level+1);
		}
	
	public:
		vector<int> rightview(Node* root){
			vector<int> res;
			preorder(root,0,res);
			return res;
		}
}