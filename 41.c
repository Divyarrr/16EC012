#include<stdio.h>
void main()
{   
    char a[100];
    int s,i;
    scanf("%s",a)
    for(i=0;a[i]!=NULL;i++)
    {
      if ( a[i]=='')
      s++;
    }
    else
        {
            c++;
        }
        printf("%d",c-s);
}
