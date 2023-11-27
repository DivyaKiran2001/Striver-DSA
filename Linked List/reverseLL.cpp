#1 Reverse a Linked List

class Solution{
	Struct Node* reverseLL(Struct Node* head)
	{
		Node* dummy=NULL;
		
		while(head!=NULL)
		{
			Node* next=head->next;
			head->next=dummy;
			dummy=head;
			next=head;
		}
		return dummy;
	}
}