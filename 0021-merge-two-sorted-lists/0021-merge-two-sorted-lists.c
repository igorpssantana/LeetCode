/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
void newNode(struct ListNode** l, int value){
    
    struct ListNode *newNode;
    
    newNode = (struct ListNode *) malloc(sizeof(struct ListNode));
    
    newNode->val = value;
    
    newNode->next = NULL;
    
    if(*l == NULL)
        *l = newNode;
    
    else{
        struct ListNode *walker;
        walker = *l;
        while(walker->next != NULL)
            walker = walker->next;
        
        walker -> next = newNode;
        
    }

    return;
    
}
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2){
    
    struct ListNode *mergedList = NULL;
    
    while(list1 != NULL || list2 != NULL){
        
        
        if(list1 == NULL && list2 != NULL){
            
            newNode(&mergedList, list2->val);
            list2 = list2->next;

        }
        
        else if(list1 != NULL && list2 == NULL){
            
            newNode(&mergedList, list1->val);
            list1 = list1->next;
            
            
        }

        else if(list1->val > list2->val){
            newNode(&mergedList, list2->val);
            list2 = list2->next;
        }

        else{

            newNode(&mergedList, list1->val);
            list1 = list1->next;

        }
        
        
    }
    
    return mergedList;
    
}