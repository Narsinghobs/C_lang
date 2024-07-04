#include <stdio.h>
#include <stdlib.h>

typedef struct node
{
    int val;
    struct node *next;
}NODE;

void dispList(NODE *);



int main()
{
    NODE *nn=NULL, *head=NULL, *temp=NULL;
    int ch = 1;

    while(ch)
    {   
        //creating new node
        nn = (NODE *)malloc(sizeof(NODE));
        //initializing nn
        printf("\nEnter the value of new Node: ");
        scanf("%d",&nn->val);
        nn->next = NULL;
        // printf("\nNew node's address = %u",nn);
        //make a relationship
        if(head == NULL)
        {
            //empty list
            head = nn;
            temp = nn;
        }
        else
        {
            //list is already present and add
            // nn to the end of list
            
            head->next = nn;
            head = head->next;

        }
        
        
        printf("\nDo you want to add a new Node (1/0): ");
        scanf("%d",&ch);
    }

    head = temp; //point head back to BA of list

    dispList(head);

    
    printf("\n\n");
    return 0;
}


void dispList(NODE *head)
{
    printf("\nList is\n");
    while(head != NULL)
    {
        printf("%d->",head->val);
        head = head->next;
    }

    printf("NULL\n");
}