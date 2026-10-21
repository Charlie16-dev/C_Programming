////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Divide
// Description   : It is used to perform division of two numbers
//
// Input         : Integer, Integer
// Output        : Integer (-1 if the second number is zero)
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

int Divide(int iNo1,int iNo2)
{
    int iAns = 0;

    if(iNo2 == 0)
    {
        return -1;
    }
    iAns = iNo1/iNo2;

    return iAns ;
}

int main()
{
    int iValue1 = 15, iValue2 = 5;
    int iRet = 0;

    iRet = Divide(iValue1,iValue2);

    printf("Division is %d",iRet);

    return 0;
}