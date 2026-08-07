bool hasCycle(struct ListNode *head) {
    struct ListNode *lead = head;
    struct ListNode *lag = head;

    while (lead != NULL && lead->next != NULL) {
        lead = lead->next->next;
        lag = lag->next;
        if (lead == lag) {
            return true;
        }
    }
    return false;
}