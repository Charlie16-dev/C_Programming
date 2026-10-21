////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : It is used to display stars from 0 to the given number
//
// Input         : Integer
// Output        : None (Displays stars iNo + 1 times)
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
// Note          : The loop starts from 0 and runs until iCnt <= iNo.
//                 Therefore, it prints iNo + 1 stars.
//
////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{

    int iCnt = 0;
    while(iCnt <= iNo)
    {
        printf("*");
        iCnt++;
    }


}
int main()
{
    int iValue = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}