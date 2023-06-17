class Solution {
public:
    ListNode* middleNode(ListNode* head) {
        ListNode* tmp=head;
        ListNode* tmp1=head;
        int c=0;
        while(tmp!=NULL)
        {
            c++;tmp=tmp->next;
        }
        int x=c/2;
        while(x!=0)
        {
            tmp1=tmp1->next;
            x--;
        }
        return tmp1;
    }
};