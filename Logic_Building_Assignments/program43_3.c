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

void DisplayProduct(PNODE First)
{
    int iProd = 1;
    int iNo = 0;
    int iDigit = 0;
    while(First != NULL)
    {   
        iNo = First->data;        
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit != 0)
            {     
            iProd = iProd * iDigit;
            }
            iNo = iNo / 10;
        }
        printf("%d\t",iProd);
        iProd = 1;
        First = First->next;           
    }
}

int main()
{
    PNODE Head = NULL;
    
    InsertFirst(&Head,11);
    InsertFirst(&Head,20);
    InsertFirst(&Head,32);
    InsertFirst(&Head,41);
    
    Display(Head);
   
    DisplayProduct(Head);

    return 0;
}