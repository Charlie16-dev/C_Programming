////////////////////////////////////////////////////////////////////////////////////////
//
// Function name : Display
// Description   : It is used to display the specified number of stars
//
// Input         : Integer
// Output        : None (Displays stars according to the input number)
//
// Author        : Yash Sunil Gaikwad
// Date          : 21/10/2026
//
// Note          : The loop runs while iNo is greater than 0.
//                 After printing each star, iNo is decremented by 1.
//                 If the input is 5, it prints 5 stars.
//                 If the input is 0 or negative, it prints no stars.
//
////////////////////////////////////////////////////////////////////////////////////////


#include<stdio.h>

void Display(int iNo)
{

    
    while(iNo > 0)
    {
        printf("*");
        iNo--;
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