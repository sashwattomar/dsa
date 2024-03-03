/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
if(head==NULL)
return head; 

        int count=0;
        ListNode*  remov = new ListNode(0, head);
        ListNode* temp = remov;

while(temp->next!=NULL){
    temp = temp->next;
    count++;

    if( count > n ){
        remov=remov->next;
    }
}

if(count==n){
    return head->next;
}

// if(remov!=NULL && remov->next!=NULL){
remov->next = remov->next->next;
return head;
// }

// return head;


    }
};
// ssssssssssssssssss
// 0->1->2->3->4->5
// count = 0,1,2,3,4,5
// remov =count > n = 0,1,2,3 
// n=2
// temp=0,1,2,3,4,5,NULL