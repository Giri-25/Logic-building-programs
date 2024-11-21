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

int SecMaximum(PNODE First)
{
    int isecmax = 0, imax = 0;
    while(First != NULL)
    {
        if (First->data > imax)
        {
            imax = First->data;   
        }       

        if(First->data > isecmax && First->data < imax)
        {
            isecmax = First->data;
        } 
        First = First->next;       
    
    }
    return isecmax;    
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,240);
    InsertFirst(&Head,110);
    InsertFirst(&Head,230);
    InsertFirst(&Head,320);
    
    
    Display(Head);
   
    iRet = SecMaximum(Head);
    printf("Second maximum no. is : %d\n",iRet);

    return 0;
}