#include<stdio.h>
void main()
{
    int a[10],i,n,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }min=a[0];
    for(i=0;i<n;i++)
    {
        if(a[0]<min)
        {
            min=a[i];
        }
    }
    printf("%d",min);
}

