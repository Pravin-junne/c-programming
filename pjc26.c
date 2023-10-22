//Insertion sort- 01
#include<stdio.h>

int main()
{
    int a[10],N,i,j,temp;
    
    printf("\nEnter Array Size:");
    scanf("%d",&N);
    printf("\nEnter Array Elements:");
    for(i=0;i<N;i++)
    {      
        scanf("%d",&a[i]);
    }
    for(i=1;i<N;i++)
    {       
        temp=a[i];
        for(j=i-1;j>=0&&a[j]>temp;j--)
        {        
            
            a[j+1]=a[j];   
        }
        a[j+1]=temp;
    }
    printf("\nSorted Array Elements:");
    for(i=0;i<N;i++)
    {      
        printf("%d\t",a[i]);
    }
    return 0;
}