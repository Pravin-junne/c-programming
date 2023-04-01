#include<stdio.h>
int main()
{
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