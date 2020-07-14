class Solution {
public:
    bool isPalindrome(ListNode* head) {
        if(head==NULL || head->next==NULL)
            return true;
       ListNode *List1,*List2,*temp;
       temp = MiddleNode(head);
       List2 = temp->next;
       temp->next = NULL;
       List2 = ReverseList(List2);
       List1 = head;

        while(List1!=NULL && List2!=NULL)
        {
            if(List1->val != List2->val)
            {
                return false;
            }
            List1 = List1->next;
            List2 = List2->next;
        }

        return true;
    }
    ListNode* MiddleNode(ListNode *head)
    {
        ListNode *slow=head,*fast=head;
        while(fast->next && fast->next->next)
        {
            slow=slow->next;
            fast=fast->next->next;
        }
        return slow;
    }
    ListNode* ReverseList(ListNode *head)
    {
        ListNode *frwd,*curr=head,*prev=NULL;
        while(curr!=NULL)
        {
            frwd = curr->next;
            curr->next = prev;
            prev = curr;
            curr = frwd;
        }
        return prev;
    }
};
