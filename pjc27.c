//Selection sort-01
#include<stdio.h>
#include<conio.h>
int main(){
        int a[10],N,i,j,k,temp;
        printf("\n Enter Size of Array:");
        scanf("%d",&N);
        printf("\n Enter Array Elements:");
            for(i=0; i<N; i++){
                scanf("%d",&a[i]);
            }
            for(i=0; i<N-1; i++){
                k=i;
                for(j=i+1; j<N; j++){
                    if(a[j]<a[k]){
                        k=j;
                    }
                }
                if(i!=k){
                    temp=a[i];
                    a[i]=a[k];
                    a[k]=temp;
                }
            }
            printf("\n Sorted Array Elements:");
            for(i=0; i<N; i++){
                printf("%d\t", a[i]);
            }

    return 0;
}