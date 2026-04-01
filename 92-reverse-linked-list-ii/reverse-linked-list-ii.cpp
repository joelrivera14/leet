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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(head == nullptr || head->next == nullptr){
            return head;
        }
        ListNode* current = head;
        ListNode* prev = nullptr;
        while(left>1){
            prev = current;
            current = current->next;
            left--;
            right--;
        }

        ListNode* connection = prev;
        ListNode* tail = current;
        while(right>0){
            ListNode* nextNode = current->next;
            current->next = prev;
            prev = current;
            current = nextNode;
            right--;
        }

        if(connection != nullptr){
            connection->next = prev;
        }
        else{
            head = prev;
        }
        tail->next = current;
        return head;
    }
};