#include<stdio.h>
int main()
{       //while loop program to find even numbers.
    int i=0,n;
    printf("Enter the number:-");
    scanf("%d",&n);
    while(i<=n)
    {
        printf("%d\n",i);
        i=i+2;
    }
return 0; 
}