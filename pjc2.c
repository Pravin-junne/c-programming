#include<stdio.h>
int main()
{       //if else program to find even odd number
    int number;
    printf("Enter the number:");
        scanf("%d",&number);
    if(number%2==0)
    {
        printf("Number is Even..");
    }
    else
    {
        printf("Number is Odd..");
    }
return 0;
}