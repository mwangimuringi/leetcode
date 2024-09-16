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
class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2)
    {
        if( !list1 ) return list2;
        if( !list2 ) return list1;

        ListNode* head = list1;
        if(list1->val > list2->val){
            head = list2;
            list2 = list2->next;
        }
        else
            list1 = list1->next;
        ListNode* cur = head;
        while(list1 && list2)
        {
            if(list1->val < list2->val) {
                cur->next = list1;
                list1 = list1->next;
            } else
            {
                cur->next = list2;
                list2 = list2->next;
            }
            cur = cur->next;
        };
        if(!list1) cur->next = list2;
        else cur->next = list1;

        return head;
    }
};