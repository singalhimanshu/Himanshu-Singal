ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
  // base cases
  if (list1 == nullptr) {
    return list2;
  }
  if (list2 == nullptr) {
    return list1;
  }
  // decide head
  ListNode *head = nullptr;
  if (list1->val <= list2->val) {
    head = list1;
    list1 = list1->next;
  } else {
    head = list2;
    list2 = list2->next;
  }
  // current
  ListNode *cur = head;
  while (list1 && list2) {
    // updation of links
    if (list1->val <= list2->val) {
      cur->next = list1;
      list1 = list1->next;
    } else {
      cur->next = list2;
      list2 = list2->next;
    }
    cur = cur->next;
  }
  cur->next = list1 == nullptr ? list2 : list1;
  return head;
}
