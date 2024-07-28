#include<stdio.h>

void Display(int No)    // Callee
{
    int iCnt = 0;

    while(iCnt < No)
    {
        printf("Jay Ganesh...\n");
        iCnt++;
    }
}

int main()      // Caller
{
    Display(4);     

    return 0;
}