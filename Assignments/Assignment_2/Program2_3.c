////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : It is used to display "Hello" if the number is less than 10,
//                 otherwise it displays "Demo"
//
// Input         : Integer
// Output        : None (Displays "Hello" or "Demo")
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
// Note          : If the input number is less than 10, it displays "Hello".
//                 If the input number is greater than or equal to 10,
//                 it displays "Demo".
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>

void Display(int iNo)
{
    
    if(iNo < 10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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