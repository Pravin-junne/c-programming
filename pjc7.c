#include<stdio.h>
int main()
{           //else if ladder program to find largest number.
    int a,b,c,d;
    printf("Enter the values of A,B,C,D:-");
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>b && a>c && a>d)
    {
        printf("A is largest");
    }
    else if(b>a && b>c && b>d)
    {
        printf("B is largest");
    }
    else if(c>a && c>b && c>d)
    {
        printf("C is largest");
    }
    else if(d>a && d>b && d>c)
    {
        printf("D is largest");
    }
return 0;
}