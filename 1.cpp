//[Leetcode 2095]

class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        int len=0;
        ListNode* temp=head;
        while(temp){
            temp=temp->next;
            len+=1;
        }
        if(len<=1) return NULL;
        len=len/2;
        temp=head;
        for(int i=0;i<len-1;i++){
             temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};