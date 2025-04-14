class Solution {
    public:
        bool hasCycle(ListNode *head) {
            ListNode* T = head;
            ListNode* H = head;
            while(H != nullptr && H -> next!= nullptr)
            {
                T = T -> next;
                H = H -> next -> next;
            
             if(T == H )
              return true;
            }
              return false;
        }
    };