class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL)
            return list2;
        else if(list2==NULL)
            return list1;
        else if(list1==NULL && list2==NULL)
            return NULL;
        ListNode *fs=NULL;
        ListNode *fe=NULL;
        if(list1->val<list2->val)
        {
            fs=list1;
            fe=list1;
            list1=list1->next;
        }
        else
        {
            fs=list2;
            fe=list2;
            list2=list2->next;
        }
        while(list1!=NULL && list2!=NULL)
        {
            if(list1->val<list2->val)
            {
                fe->next=list1;
                fe=list1;
                list1=list1->next;
            }
            else
            {
                fe->next=list2;
                fe=list2;
                list2=list2->next;
            }
        }
        if(list1!=NULL)
        {
            fe->next=list1;
        }
        if(list2!=NULL)
        {
            fe->next=list2;
        }
        return fs;
    }
};
