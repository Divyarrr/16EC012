#include<stdio.h>
void main()
{
    char a[100];
    int i ;
    gets(a);
    if(a[0]>='a'&&a[0]<='z')
    {
        a[0]=a[0]-32;
        
    }
    for(i=0;a[i]!=NULL;i++)
    {
        if(a[i]==' ')
        {
            if(a[i+1]>='a'&&a[i+1]<='z')
            
            {
            a[i+1]=a[i+1]-32;
            }
        }
        printf("%c",a[i]);

    }
}
