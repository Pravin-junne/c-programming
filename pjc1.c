#include<stdio.h>
int main()
{
    int pin;
    printf("Enter your ATM pin:");
        scanf("%d",&pin);
    if(pin == 2775)
    {
        printf("Wel-come");
    }
    else{
        printf("Wrong pin...");
    }
return 0;
}