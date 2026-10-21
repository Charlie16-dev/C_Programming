////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Accept
// Description   : It is used to display the specified number of stars
//
// Input         : Integer
// Output        : None (Displays stars according to the input number)
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Accept(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++ )
    {
        printf("*");
    }
}

int main()
{
    int iValue = 0;
    iValue = 5;

    Accept(iValue);

    return 0;
}