#2 Remove Nth Node from end of linked list

class Solution{
	ListNode* removeNth(ListNode* head,int n)
	{
		ListNode* start=NULL;
		start->next=head;
		ListNode* slow=start;
		ListNode* fast=start;
		for(int i=0;i<n;i++)
		{
			fast=fast->next;
		}
		while(fast->next!=NULL)
		{
			slow=slow->next;
			fast=fast->next;
		}
		slow->next=slow->next->next;
		return start->next;
	}
}