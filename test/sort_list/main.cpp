/**
 * Definition for singly-linked list.
 **/
#include <iostream>
#include <vector>
using namespace std;
 struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 void fun(ListNode * first,int i)
 {
     ListNode * a = first;
     ListNode *b = a;
     int t=0;
     while(){
     
     while(b!=NULL && t<i)
     {
         b=b->next;
         t++;
     }

     if(b==NULL) return ;

     }

 }
class Solution {
public:
    ListNode *sortList(ListNode *head) {
    if(!head||!head->next) return head;
    int counter =0;
    ListNode * first =head;
    while(first!=NULL)
    {
        counter++;
        first=first->next;
    }
     first = head;
     first = fun(first);

     return first;


        
    }
};