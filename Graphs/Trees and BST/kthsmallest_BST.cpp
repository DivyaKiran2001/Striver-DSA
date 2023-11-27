#7 Kth smallest element in BST

#Can be done using inorder traversal (Left Root Right) and increasing the count value_comp
#when the count == k then return root->data

class Solution{
	public:
		int kthsmallest(Node* root,int k){
			int count=0,ans=0;
			kthsmallest(Node->left);
			count++;
			if(count==k) return ans=root->data;
			kthsmallest(Node->right);
		}
}