#include<stdio.h>
int main()
{       //while loop program to print table.
    int number,table,i=1;
    printf("Enter the number:-");
    scanf("%d",&number);
    while(i<=10)
    {
        table=number*i;
        printf("%d* %d = %d\n",number,i,table);
        i++;
    }
return 0;
}