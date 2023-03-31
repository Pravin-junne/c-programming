#include<stdio.h>
int main()
{       //while loop program to find odd numbers.
    int i=1,n;
    printf("Enter the number:-");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
return 0; 
}