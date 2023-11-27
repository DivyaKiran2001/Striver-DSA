#5 Minimum Element in BST

int Minval(Node* root){
	if(root==NULL) return -1;
	else if(root->left==NULL) return root->data'
	else Minval(root->left);
}