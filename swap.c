#include<stdio.h>
void main()
{
    char a[100],b;
    int i,n;
    gets(a);
    for(i=0;a[i]!=NULL;i++)
    {
     if(i%2==0) 
     {
         b=a[i];
         a[i]=a[i+1];
         a[i+1]=b;
     }
     printf("%c",a[i]);
    }
}
