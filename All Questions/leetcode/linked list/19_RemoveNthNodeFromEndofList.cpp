class Solution
{
public:
    ListNode *removeNthFromEnd(ListNode *head, int n)
    {
        if (head == NULL || head->next == NULL)
        {
            return nullptr;
        }

        ListNode *temp = head;
        int count = 0;

        // count the total number of nodes in LL
        while (temp != NULL)
        {
            count++;
            temp = temp->next;
        }

        // heandle the case where n is greater than or equal to len ll
        if (n >= count)
        {
            return head->next;
        }

        // find the node
        int target = count - n - 1;
        temp = head;

        while (target > 0)
        {
            temp = temp->next;
            target--;
        }

        // remove the nth node
        temp->next = temp->next->next;
        return head;
    }
};