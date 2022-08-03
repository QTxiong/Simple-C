#include <stdio.h>

int main()
{
	int a,i,b[8];
	scanf("%d",&a);
	if(a>=0&&a<=255)
	{
		for(i=0;i<=7;i++)
		{
			b[i]=a%2;
			a=a/2;	
		}	
	} 
	for(i=7;i>=0;i--)
	printf("%d",b[i]);
	return 0;
} 
