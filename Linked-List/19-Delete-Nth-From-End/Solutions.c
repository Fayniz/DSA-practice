struct ListNode* middleNode(struct ListNode* head) {
    struct ListNode * lead = head;
    struct ListNode * lag = head;
    while (lead!= NULL && lead->next != NULL){
        //if (lead->next == NULL){break;}
        lead = lead->next->next;
        lag = lag->next;
    }
    return lag;
}