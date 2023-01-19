/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

void newNode (struct ListNode **l, int value){

    struct ListNode *newNode, *walker;

    newNode = (struct ListNode*) malloc(sizeof(struct ListNode));

    newNode->val = value;

    newNode->next = NULL;

    if (*l == NULL){
        *l = newNode; 
    }

    else{

        walker = *l;

       while(walker->next != NULL)
            walker = walker->next;
        
            
        walker->next = newNode; 
    }
        

    return;
}
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){

    struct ListNode *newArray = NULL;
    short int sumNext = 0, lastSum;

    while(l1 != NULL || l2 != NULL){

        if(l1 == NULL){
           newNode(&newArray, ((l2->val) + sumNext) % 10);
           lastSum = (l2->val) + sumNext;
        }   
        
        else if (l2 == NULL){
            newNode(&newArray, ((l1->val) + sumNext) % 10);
            lastSum = (l1->val) + sumNext;
        }
                
        else{
            newNode(&newArray, (((l1->val) + (l2->val)) + sumNext) % 10);
            lastSum = ((l1->val) + (l2->val)) + sumNext;
        }
            
        sumNext = 0;

        if((l1 != NULL || l2 != NULL) && lastSum >= 10){
            sumNext = 1;
        }
            

        if(l1 != NULL){
            l1 = l1->next;
        }
            
        if(l2 != NULL){
            l2 = l2->next;
        }
            
              
    }

    if(sumNext == 1)
        newNode(&newArray, sumNext);
        sumNext = 0;
    
    return newArray;
}