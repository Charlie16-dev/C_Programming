////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : CheckEven
// Description   : It is used to check whether a number is even or odd
//
// Input         : Integer
// Output        : None (Displays whether the number is even or odd)
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
// Note          : If the number is divisible by 2, it displays that the number
//                 is even; otherwise, it displays that the number is odd.
//                 The function does not return any value.
//
// Example Input : 6
// Example Output: 6 is Even
//
// Example Input : 7
// Example Output: 7 is Odd
//
////////////////////////////////////////////////////////////////////////////////////////
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CheckEven(int iNo)
{
    if(iNo % 2 == 0)
    {
        printf("%d is Even",iNo);
    }
    else
    {
        printf("%d is Odd",iNo);
    }
    
}
int main()
{
    int iValue = 0;
    BOOL bRet = FALSE;
    
    printf("Enter Number :");
    scanf("%d",&iValue);


     CheckEven(iValue);

    return 0;
}