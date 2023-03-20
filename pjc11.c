#include<stdio.h>
#include<conio.h>
int main()
{           //switch program of calculator
o    float num1,num2,result;
    char op;
    printf("Enter the first number:-");
    scanf("%f",&num1);

    printf("Enter the operation:-");
    scanf(" %c",&op);

    printf("Enter the second number:-");
    scanf("%f",&num2);


    switch(op)
    {
        case '-':
        result=num1-num2;
        printf("Ans:-%f",result);
        break;

        case '+':
        result=num1+num2;
        printf("Ans:-%f",result);
        break;

        case '*':
        result=num1*num2;
        printf("Ans:-%f",result);
        break;

        case '/':
        result=num1/num2;
        printf("Ans:-%f",result);
        break;

        default:
        printf("invalid oprator");

    }
    return 0;
}