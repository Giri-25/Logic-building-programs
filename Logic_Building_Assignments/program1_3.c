#include<stdio.h>
//print 5 to 1 numbers on screen
void Display()
{
    int i = 0;
    i=5;
    while(i > 0)
    {
        printf("%d\n",i);
        i--;
    }
}
int main()
{
    Display();
    return 0;
}