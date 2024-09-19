[Leetcode 1669]
class Solution {
public:
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode* x=list1;
        for(int i=1;i<a;i++){
            x=x->next;
        }
        ListNode* temp=list1;
        for(int i=1;i<=b;i++){
            temp=temp->next;
        }
        ListNode* t1=list2;
        while(t1->next!=NULL){
            t1=t1->next;
        }
        t1->next=temp->next;
        x->next=list2;
        return list1;
    }
};