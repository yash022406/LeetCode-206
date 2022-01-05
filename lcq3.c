/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


struct ListNode* reverseList(struct ListNode* head){
    struct ListNode* temp2=head;
    struct ListNode* temp1=head;
    
    int i,j,t,n=0;
    while(temp1!=NULL){
        temp1=temp1->next;
        n++;
    }
    temp1=head;
    for(i=1;i<=n/2;i++){
        for(j=1;j<i;j++){
            temp1=temp1->next;
        }
        for(j=1;j<n-i+1;j++){
            temp2=temp2->next;
        }
        t=temp1->val;
        temp1->val = temp2->val;
        temp2->val = t;
        
        temp1=head;
        temp2=head;
    }
    return head;
}