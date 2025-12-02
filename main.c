#include<stdio.h>
#include"vectorop.h"
int main()
{
    int a[]={1,2,3};
    int b[]={4,5,6};
    int size=3;
    int*i;
    i=vadd(a,b,size);
    printf("Result of vector addition:\n");
    for(int j=0;j<size;j++)
    {
        printf("%d ",i[j]);
    }
    printf("\n");
    return 0;
}