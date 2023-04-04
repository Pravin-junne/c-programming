#include<stdio.h>
int main()
{       //for loop program to calculate the sum of first n th numbers
    int sum=0,count,num;
    printf("Enter the last positive integer:-");
    scanf("%d",&num);
    for(count=1;count<=num;count++)
    {
        sum+=count;
    }
    printf("Sum of first n th number:-%d",sum);
return 0;
}