class Solution {
public:
    void reorderList(ListNode *head) {
        if(!head) return ;
        if(!head->next) return ;
        if(!head->next->next) return ;
int counter=0;
ListNode * first = head;
while(first)
{
    counter++;
    first=first->next;
}
first=head;
ListNode * second=first;
for(int i=0;i<counter/2;i++)
    second =second->next;
    
ListNode * prefirst=first;
while(second!=NULL)
{
    if(!second->next)
        prefirst=first;
    first =first->next;
    second =second->next;
    


}
second=first->next;
first->next=NULL;
prefirst->next=NULL;
ListNode * third=first->next;
while(second)
{
 third=second->next; 
 second->next=first;
 first=second;
 second=third;

}
second=first;
first =head;
while(second)
{
    third =second->next;
    second->next=first->next;
    first->next = second;
    first=second->next;
    second=third;

}
 
 
return ;

        
    }
};

class Solution {
public:
ListNode *midNode(ListNode *pHead,ListNode *&preNode){
    if(pHead == NULL)
        return NULL;
    ListNode *slow = pHead;
    ListNode *fast = slow;
    preNode = slow;
    while(fast != NULL && fast->next != NULL){
        preNode = slow;
        slow = slow->next;
        fast = fast->next;
        if(fast != NULL)
            fast = fast->next;
    }
    return slow;
}
 