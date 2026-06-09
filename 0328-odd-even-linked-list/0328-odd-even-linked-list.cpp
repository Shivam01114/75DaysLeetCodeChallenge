/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        ListNode* temp = head;

        ListNode* odd = new ListNode(0);
        ListNode* even = new ListNode(0);

        ListNode* cur1 = odd;
        ListNode* cur2 = even;

        int count = 1;

        while (temp != nullptr) {
            ListNode* nextNode = temp->next;

            if (count % 2 != 0) {
                cur1->next = temp;
                cur1 = cur1->next;
            } else {
                cur2->next = temp;
                cur2 = cur2->next;
            }

            temp->next = nullptr;
            temp = nextNode;
            count++;
        }

        cur1->next = even->next;

        return odd->next;
    }
};