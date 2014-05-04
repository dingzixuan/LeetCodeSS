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
    bool hasCycle(ListNode *head) {
        if (head == NULL) return false;
        ListNode *bp = head;
        ListNode *fp = head->next;
        bool flag = false;
        while (fp != NULL) {
            if (fp == bp) {
                flag = true; 
                break;
            } 
            fp = fp->next;
            if (fp != NULL) {   //if写一次，fp可以比bp超前一个节点，并且注意赋值顺序
                fp = fp->next;
            }
            bp = bp->next;
        }
        return flag;
    }
};
