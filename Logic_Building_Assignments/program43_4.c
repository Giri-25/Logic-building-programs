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

void DisplaySmall(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iSmall = 0;

    while(First != NULL)
    {   
        iNo = First->data;
        iSmall = First->data;        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit < iSmall)
            {     
                iSmall = iDigit;
            }
            iNo = iNo / 10;
        }
        printf("%d\t",iSmall);
        iSmall = 0;
        First = First->next;           
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertFirst(&Head,415);
    InsertFirst(&Head,532);
    InsertFirst(&Head,250);
    InsertFirst(&Head,11);
    
    Display(Head);
   
    DisplaySmall(Head);

    return 0;
}