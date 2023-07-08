class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head==NULL || head->next==NULL || head->next->next==NULL)
        return false;
        ListNode *fast=head;
        ListNode *slow=head;
        int f=0;
        while(fast != NULL && fast ->next != NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            if(fast==slow)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        return true;
        return false;
    }
};