#16 Maximum Path Sum from any Node

class Solution
{
	private:
		int maxPathDown(Node* root,int &maxi)
		{
			if(root==NULL) return 0;
			left=max(0,maxPathDown(root->left,maxi));
			right=max(0,maxPathDown(root->right,maxi));
			maxi=max(maxi,left+right+root->data);
			return root->data+max(left,right);
		}
	public:
		int findMaxSum(Node *root)
		{
			int maxi=INT_MIN;
			maxPathDown(root,maxi);
			return maxi;
		}
}