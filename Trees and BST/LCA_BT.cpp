#3 Lowest Common Ancestor in a Binary Tree

#Can be done using DFS traversal technique

class Solution{
	public:
		Node* LCA(Node* root,Node* p,Node* q){
			if(root==NULL || root==p || root==q){
				return root;
			}
			Node* left=LCA(root->left,p,q);
			Node* right=LCA(root->right,p,q);
			if(left==NULL){
				return right;
			}
			if(right==NULL){
				return left;
			}
			else{
				return root;
			}
		}
}