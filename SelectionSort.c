#include<stdio.h>
#include<conio.h>
void main()
{
	int a[5],i,j,temp;
	printf("\n Enter 5 array element:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<4;i++)
	{
		for(j=i+1;j<=4;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}
	printf("\n Sorted elements:");
	for(i=0;i<5;i++)
	printf("\n %d",a[i]);
	getch();
}
