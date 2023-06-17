ListNode* sentinal = new ListNode(-1);
        sentinal->next = head;
        
        ListNode* prev = sentinal;
        ListNode* curr = head;
        ListNode* fast = head;
        
        while (--n) fast = fast->next;
        
        while( fast->next ) {
            prev = curr;
            curr = curr->next;
            fast = fast->next;
        }
        
        prev->next = curr->next;
        return sentinal->next;