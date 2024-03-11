/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */

struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2){
    struct ListNode* ptr=NULL;
     struct ListNode* head=NULL;
     struct ListNode* curr=NULL;
    int carry=0;
    int tempSum=0;


    while((l1 != NULL) && (l2 != NULL))
    {
        tempSum =  l1->val + l2->val + carry;
        if(tempSum > 9)
        {   tempSum = tempSum%10;
            carry = 1;
        }
		else
		{
			carry = 0;
		}
		
        ptr = (struct ListNode*)malloc(sizeof(struct ListNode));
		ptr->val = tempSum;
		ptr->next = NULL;

        if(head == NULL)
        {
            head = ptr;
        }
        else
        {
			curr->next = ptr;
        }
		curr = ptr;
		l1 = l1->next;
		l2 = l2->next;
    }

	
	struct ListNode* new = l1;
	
	if(l1 == NULL)
	{
		new = l2; 
	}
	
	
	while(new != NULL)
	{
		tempSum =  new->val + carry;

        printf("Value: %d\n",tempSum);

        if(tempSum > 9)
        {   tempSum = tempSum%10;
            carry = 1;
        }
		else
		{
			carry = 0;
		}
		
        ptr = (struct ListNode *)malloc(sizeof(struct ListNode));
		ptr->val = tempSum;
		ptr->next = NULL;

        if(head == NULL)
        {
            head = ptr;
        }
        else
        {
			curr->next = ptr;
        }
		curr = ptr;
		new = new->next;
	}
	
	if(carry==1)
	{
        printf("Carry Present\n");
		ptr = (struct ListNode *)malloc(sizeof(struct ListNode));
		ptr->val = carry;
		ptr->next = NULL;

        if(head == NULL)
        {
            head = ptr;
        }
        else
        {
			curr->next = ptr;
        }
		curr = ptr;
	}
    return head;
}
