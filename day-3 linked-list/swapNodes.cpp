class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head == NULL || head-> next == NULL)
        {
            return head;
        }

        ListNode* first = head;
        ListNode* second = head-> next;

        while(first != NULL && second != NULL)
        {
            int data = first-> val;
            first-> val = second-> val;
            second-> val = data;

            first = second-> next;
            if(first != NULL && first-> next != NULL)
            {
                second = first-> next;
            }
            else
            {
                break;
            }
        }
        return head;
    }
};;