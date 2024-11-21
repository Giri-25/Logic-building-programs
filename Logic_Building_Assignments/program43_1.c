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

void Reverse(PNODE First)
{
    int iDigit = 0;
    int iNo = 0;
    int iRev = 0;
    
    while(First != NULL)
    {
        iNo = First->data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;       
            iNo = iNo / 10;
            iRev = iRev * 10 + iDigit;           
        }
        printf("| %d |->",iRev);         
        iRev = 0;       
        First = First->next;        
    }
}

int main()
{
    PNODE Head = NULL;
    int iRet = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,6);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,28);
    InsertFirst(&Head,11);
    
    Display(Head);
   
    Reverse(Head);

    return 0;
}