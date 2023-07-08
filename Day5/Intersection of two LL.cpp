class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode *t1=headA;
        ListNode *t2=headB;
        while(t1!=NULL)
        {
            t2=headB;
            while(t2!=NULL)
            {
                if(t1==t2)
                    return t2;
                t2=t2->next;
            }
            t1=t1->next;
        }
        return NULL;
    }
};