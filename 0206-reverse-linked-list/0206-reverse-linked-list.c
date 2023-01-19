/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

 int newElement (struct ListNode** List, int Element){

     struct ListNode* newElement;

     newElement = (struct ListNode*) malloc(sizeof(struct ListNode));

    if (*List == NULL){

        newElement->val = Element;
        newElement->next = NULL;
        *List = newElement;
        return 0;
    }

    newElement->val = Element;
    newElement->next = *List;
    *List = newElement;
    return 0;


 }
struct ListNode* reverseList(struct ListNode* head){

    struct ListNode* reverseList = NULL;
    struct ListNode* aux;


    while (head != NULL){

        newElement(&reverseList, head->val);
        aux = head;
        head = head->next;
        free(aux);
    }

    return reverseList;
}