#5 Add Two Numbers in a Linked List

class Solution{
	ListNode* addTwoNumbers(ListNode* L1,ListNode* L2){
		ListNode* dummy=new ListNode*(0);
		ListNode* temp=dummy;
		while(L1!=NULL || L2!=NULL ||carry){
			int sum=0;
			if(L1!=NULL){
				sum+=L1->val;
				L1=L1->next;
			}
			if(L2!=NULL){
				sum+=L2->val;
				L2=L2->next;
			}
			sum+=carry;
			carry=sum//10;
			ListNode* node=new ListNode(sum%10);
			temp->next=node;
			temp=temp->next;
		}
		return dummy->next;
	}
}

