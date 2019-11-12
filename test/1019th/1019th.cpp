class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
	vector<int> re;
	if(head==NULL) return re;
	ListNode * first = head;
	ListNode *second = head->next;
//	if(second ==NULL)  reuturn re;
	
	int count =1;
	while(NULL!=second)
	{
		count++;
		if(second->val>first->val)
			first->val = 0;
		first = second;
		second =second->next;
	}  
	
	first = head;
	second = first;
	while(NULL!=second){
	while(NULL!=second && second->val!=0)
		second=second->next;
	if(NULL == second) re=vector<int>(count,0);      
	else {
	
	
	second = second->next;
	while(first!=second){
	if(first->val<second->next)
		first->val = second->val;
	else first->val = 0;	
	
	first=first->next;

}
}

}

    }
};
