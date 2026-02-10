/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) { //This function checks whether a linked list has a cycle or nah. Head: first node
        ListNode* fast = head; //Pointer called fast
        ListNode* slow = head; //Pointer called fast

        while (fast != nullptr && fast -> next != nullptr) {
            fast = fast -> next -> next; //Move fast pointer two steps forward
            slow = slow -> next; //Move slow pointer one step forward

            if (fast == slow){ //Check if both pointers are pointing to the same node
                return true; //If they meet, cycle detected (return true)
            }
        }

        return false;
    }
};