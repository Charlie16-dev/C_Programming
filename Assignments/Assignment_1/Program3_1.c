////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : It is used to display numbers from 5 to 1
//
// Input         : None
// Output        : None (Displays numbers from 5 to 1)
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display()
{
    int i = 0;
    i = 5;

    while(i>=1)
    {
        printf("%d",i);
        i--;
    }
}

int main()
{
    Display();
    return 0;
}