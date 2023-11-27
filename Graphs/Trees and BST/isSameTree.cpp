#Check if two trees are identical or not

#To check if two two trees are identical we can see the traversals of both the trees and see if they are same if they are same then both the trees are identical
#We can use any traversal techniques 
#We use PreOrder traversal

class Solution{
	public:
		bool issameTree(Node* p,Node* q){
			if(p==NULL || q==NULL){
				return (p==q);
			}
			return
				(p->val==q->val) &&
				issameTree(p->left,q->left) &&
				issameTree(q->right,q->right);
		
		}
}

