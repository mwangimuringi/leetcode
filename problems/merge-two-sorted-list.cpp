/**
* Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 *     T = O(N)            S = O(1)
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        list ptr = new ListNode(0);
        ListNode cur = ptr;
        while(l1! =   null && l2! = null)
        {
            //recombine lists
            if(l1.val <= l2.val)
            {
                cur.next =  l1;
                l1 =  l1.next;
            }
            else
            {
                cur = cur.next;
                l2 =  l2.next;
            }
        }
        cur.next =  l1! = null ? l1 : l2;
        return ptr.next;

    }
};