////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : It is used to display a number for the specified frequency
//
// Input         : Integer, Integer (12, +-5)
// Output        : None (Displays the given number repeatedly) (12 12 12 12 12)
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
// Note          : If the frequency is negative, it is converted into a positive
//                 number before printing.
//                 The loop displays the given number according to the frequency.
//                 If the frequency is 5, the number is displayed 5 times.
//                 If the frequency is 0, the number is not displayed.
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo ,int iFrequency)
{
    int iCnt = 0;
    if(iFrequency < 0)
    {
        iFrequency = -iFrequency;
    }
    
    for(iCnt = 1 ; iCnt<= iFrequency; iCnt++)
    {
        printf("%d\t",iNo);
    }


}
int main()
{
    int iValue = 0;
    int iCount = 0;
    printf("Enter Number :");
    scanf("%d",&iValue);

    printf("Enter Number :");
    scanf("%d",&iCount);

    Display(iValue,iCount);

    return 0;
}