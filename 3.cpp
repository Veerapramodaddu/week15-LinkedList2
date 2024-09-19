[Leetcode 1721]
class Solution {
public:
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* temp=head;
        int n=0;
        while(temp){
            temp=temp->next;
            n++;
        }
       ListNode* a=head;
       ListNode* b=head;
       for(int i=1;i<k;i++) a=a->next;
       for(int i=1;i<(n-k+1);i++) b=b->next;
       int t=a->val;
       a->val=b->val;
       b->val=t;
       return head;
    }
};