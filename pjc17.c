#include<stdio.h>
int main()
{       //for loop program to print table
    int i,n,t;
    printf("Enter the number:-");
    scanf("%d",&n);
    for(i=1;i<=10;i++)
    {
        t=n*i;
        printf("%d*%d=%d\n",n,i,t);
    }
return 0;
}