#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = No;
    newn->next = NULL;

    if(*First == NULL)
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn; 
    }
}

void Display(PNODE First)
{
    while(First != NULL)
    {
        printf("| %d |->",First->data);
        First = First->next;
    }
    printf("NULL\n");
}

void DisplayPerfect(PNODE First)
{
    int iSum = 0;

    while(First != NULL)
    {
        for(int i = 1; i < (First->data); i++)
        {
            if((First->data) % i == 0)
            {
                iSum = iSum + i;
            }
        }
        if(iSum == (First->data))
        {
            printf("%d\t",First->data);
        }

        iSum = 0;

        First = First->next;
    }
}

int main()
{
    PNODE Head = NULL;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);
    
    Display(Head);

    printf("The perfect numbers are : ");
    DisplayPerfect(Head);

    return 0;
}