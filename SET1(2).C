#include<stdio.h>
	#include<conio.h>
	void main()
	{
	int a;
	scanf("%d",&a);
	if(a>0)
	{
	if(a%2==0)
	{
	printf("even");
	}
	if(a%2!=0)
	{
	printf("odd");
	}
	}
	else
	{
	printf("invalid");
	}
	getch();
	}
