#4 LCA in Binary Search Tree

class Solution{
	public:
		Node* LCA(Node* root,Node* p,Node* q){
			if(root=NULL) return NULL;
			int curr=root->val;
			if(curr < p->val && q->val){
				return LCA(root->right,p,q);
			}
			if(curr > p->val && q->val){
				return LCA(root->left,p,q);
			}
			else{
				return root;
			}
		}
}