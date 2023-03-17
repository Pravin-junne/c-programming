#include<stdio.h>
int main()
{           //else if ladder program to find gread of studant.
    int marks;
    printf("Enter the marks of studant:");
    scanf("%d",&marks);
    if(marks<=100 && marks>=90)
    {
        printf("Gread A");
    }
    else if(marks<90 && marks>=80)
    {
        printf("Gread B");
    }
    else if(marks<80 && marks>=70)
    {
        printf("Gread C");
    }
    else if(marks<70 && marks>=60)
    {
        printf("Fail");
    }
return 0;
}