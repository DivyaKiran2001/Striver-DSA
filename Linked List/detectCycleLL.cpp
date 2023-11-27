#4 Detect a Cycle in a Linked List

class Solution{
	bool iscyclic(ListNode* head){
		if(head==NULL || head->next==NULL) return false;
		ListNode* slow=head;
		
		while(fast->next && fast->next->next)
		{
			fast=fast->next->next;
			slow=slow->next;
			if(fast==slow) return true;
		}
		return false;
		
	
	}
}