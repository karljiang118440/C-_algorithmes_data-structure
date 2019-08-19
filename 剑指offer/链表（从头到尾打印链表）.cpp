
void insert(ListNode **pHead,int value)
{
	ListNode* pNew = new ListNode;
	pNew->value =value;
	pNew->next =NULL;
	if(*pHead==NULL)
	{
		*pHead = pNew;
	}
	else
	{
		ListNode* temp = *pHead;
		while(temp->netx !=NULL)
		{
			temp = temp->next;
		}
		temp->next=pNew;
	}
}