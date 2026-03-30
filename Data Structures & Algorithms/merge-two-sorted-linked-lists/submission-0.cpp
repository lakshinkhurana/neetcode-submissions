class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode dummy(0); // Dummy node to simplify edge cases
        ListNode* node = &dummy; // Pointer to build the new list

        while (list1 && list2) {
            if (list1->val <= list2->val) { // Merge `list1` node when values are equal or smaller
                node->next = list1;
                list1 = list1->next;
            } else { // Merge `list2` node
                node->next = list2;
                list2 = list2->next;
            }
            node = node->next;
        }

        // Append the remaining nodes from either list
        node->next = list1 ? list1 : list2;

        return dummy.next; // Return the merged list starting from the first node
    }
};
