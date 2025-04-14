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
        ListNode* middleNode(ListNode* head) {
            ListNode* T = head;  
            ListNode* H = head;  
    
            while (H != nullptr && H->next != nullptr) {
                T = T->next;
                H = H->next->next;
            }
    
            return T;
        }  
    };
    