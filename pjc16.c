#include<stdio.h>
int main()
{       //do-while loop program to print table
    int a=1,t,n;
    printf("Enter the number:-");
    scanf("%d",&n);
    do{
        t=n*a;
        printf("%d*%d=%d\n",n,a,t);
        a++;
    }
    while(a<=10);
return 0;
}