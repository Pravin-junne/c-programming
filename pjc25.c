//To sort an array using bubble sort-01
#include<stdio.h>
#include<conio.h>
int main()
{  
    int a[20],i,j,temp,N;
    printf("Enter the size of array:");
    scanf("%d",&N);
    printf("\nEnter array Element:");
    for(i=0; i<N; i++){
        scanf("%d",&a[i]);
    }
    for(i=1; i<N; i++){
               
        for(j=0; j<N-i; j++){
                 
            if(a[j]>a[j+1]){
                
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    printf("\n\n\nSorting Array Elements are:");
    for(j=0; j<N; j++){
        printf(" %d",a[j]);
    }

    return 0;
}