class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode *curr=head, *prev=NULL, *nxt=NULL;
        while(curr!=NULL)
        {
            nxt=curr->next;
            curr->next=prev;
            prev=curr;
            curr=nxt;
        }
        return prev;
    }
    ListNode* middle(ListNode* &head){
        ListNode* fast=head->next;
        ListNode* slow=head;
        while(fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                slow=slow->next;
                fast=fast->next;
            }
        }
        return slow;
    }

    bool isPalindrome(ListNode* head) {
        ListNode*head1=head;
        ListNode* mid=middle(head);
        ListNode*tail=reverseList(mid->next);
        while(head!=NULL && tail!=NULL)
        {
            if(head->val!=tail->val)
                return false;
            head=head->next;
            tail=tail->next;
        }
        return true;
    }
};
Con