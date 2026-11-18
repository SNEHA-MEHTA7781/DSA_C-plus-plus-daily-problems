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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        
        // Dummy node to make insertion easier
        ListNode* dummy = new ListNode(0);
        ListNode* current = dummy;

        int carry = 0;

        while (l1 != NULL || l2 != NULL || carry != 0) {
            
            int sum = carry;

            // Add digit from first list
            if (l1 != NULL) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add digit from second list
            if (l2 != NULL) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Digit to store in current node
            current->next = new ListNode(sum % 10);
            current = current->next;

            // Carry for next position
            carry = sum / 10;
        }

        return dummy->next;
    
    }
};

// Synced seamlessly with LeetHub Pro
// Pro features: https://bit.ly/leethubpro | Free version: https://bit.ly/leethubv4
// Get it here: https://chromewebstore.google.com/detail/bcilpkkbokcopmabingnndookdogmbna