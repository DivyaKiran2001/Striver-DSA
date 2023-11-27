#7 Flattening a Linked List

Node* mergetwoLL(Node* a,Node* b){
	Node* temp=new Node(0);
	Node* res=temp;
	while(a!=NULL && b!=NULL){
		if(a->data < b->data){
			temp->bottom=a;
			temp=temp->bottom;
			a=a->bottom;
		}
		else{
			temp->bottom=b;
			temp=temp->bottom;
			b=b->bottom;
		}
	}
	if(a) temp->bottom=b;
	else temp->bottom=a;
	return res->bottom;
}




Node* flatten(Node* root){
	if(root==NULL || root->next ==NULL){
		return root;
	}
	root->next=flatten(root->next);
	root=mergetwoLL(root,root->next);
	
	return root;
}
