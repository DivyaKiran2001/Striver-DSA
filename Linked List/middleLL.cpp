#3 Middle element in a Linked List
class Solution{
	Node* middleLL(Node* head)
	{
		ListNode* slow=head;
		ListNode* fast=head;
		while(fast!=NULL && fast->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next->next;
		}
		return slow;
	}
}