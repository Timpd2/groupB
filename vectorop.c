#include"vectorop.h"
#include<stdio.h>
int *vadd(int *a, int *b, int size)
{
    int*C=malloc(size*sizeof(int));
    int i=0;
    for(i=0;i<size;i++)
    {
        C[i]=a[i]+b[i];
    }
    return C;
}