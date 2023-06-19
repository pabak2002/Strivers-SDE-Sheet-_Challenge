class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* a=new ListNode();
        ListNode* temp=a;int carry=0;int x=0,s=0;
        while(l1!=NULL || l2!=NULL||carry>0)
        {
            s=0;
            if(l1!=NULL)
            {
                s+=l1->val;
                l1=l1->next;
            }
            x++;
            if(l2!=NULL)
            {
                s+=l2->val;
                l2=l2->next;
            }
            s+=carry;
            carry=s/10;
            ListNode* newnode= new ListNode(s%10);
            temp->next=newnode;
            temp=temp->next;
        }
        return a->next;
    }
};