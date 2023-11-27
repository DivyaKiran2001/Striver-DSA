#6 Merge two Sorted Linked Lists(Inplace)

class Solution{
	Node* mergetwoLL(Node* l1,Node* l2){
		if(l1==NULL) return L2;
		if(l2==NULL) return L1;
		if(l1->val > l2->val) std::swap(l1,l2);
		Node* res=l1;
		while(l1!=NULL && l2!=NULL){
			Node* temp=NULL;
			while(l1!=NULL && l1->val <=l2->val){
				temp=l1;
				l1=l1->next;
			}
			temp->next=l2;
			std::swap(l1,l2);
		}
		return res;
	}
}