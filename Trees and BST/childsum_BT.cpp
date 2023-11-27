#6 Children Sum Property in BST

class Solution{
	public:
		void ChangeTree(Node* root){
			if(root==NULL) return;
			int child=0;
			
			if(root->left) child+=root->left->data;
			if(root->right) child+=root->right->data;
			
			if(child >= root->data){
				root->data=child;
			}
			else{
				if(root->left) root->left->data=root->data;
				else if(root->right) root->right->data=root->data;
			}
			ChangeTree(root->left);
			ChangeTree(root->right);
			int tot=0;
			if(root->left){
				tot+=root->left->data;
			}
			if(root->right){
				tot+=root->right->data;
			}
			if(root>left || root->right)
			{
				root->data=tot;
			}
			
			
		}
}