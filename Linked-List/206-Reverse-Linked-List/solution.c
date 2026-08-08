/**
 * Definition for singly-linked list.
 
  struct ListNode {
      int val;
      struct ListNode *next;
  };
 */
struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode * prev = NULL;
    struct ListNode * current = head;
    while (current != NULL){
        struct ListNode * nextNode = current ->next;
        current->next = prev;
        prev = current;
        current = nextNode;}
    return prev;
}

//recursive solution

struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode* newHead = reverseList(head->next);
    head->next->next = head;
    head->next = NULL;
    return newHead;
}
