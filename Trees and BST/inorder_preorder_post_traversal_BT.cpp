#12 InOrder,PreOrder and PostOrder Traversal in a Binary Tree

#Using Recursion

#InOrder Traversal (Left Root Right)

void InOrder(Node* root)
{
	if(root==NULL) return;
	InOrder(root->left);
	print(root->data);
	InOrder(root->right);
}

#PreOrder Traversal (Root Left Right)

void InOrder(Node* root)
{
	if(root==NULL) return;
	print(root->data);
	PreOrder(root->left);
	PreOrder(root->right);
}

#PostOrder Traversal (Left Right Root)

void PostOrder(Node* root)
{
	if(root==NULL) return;
	PostOrder(root->left);
	PostOrder(root->right);
	print(root->data);
}