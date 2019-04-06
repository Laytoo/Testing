#include<stdio.h>
int main()
{
	int n1,n2,l;

	printf("enter the number1:");
	scanf("%d",&n1);

	printf("enter the number2:");
	scanf("%d",&n2);
	

	if(l=(n1>n2))
		l=n1;
	else
		l=n2;


	while(1)
	{
		if (l%n1==0 && l%2==0)
		{
			printf("the l of %d and %d is %d ",n1,n2,l);
			break;
		}
		++l;
		}
		

		
		
		getch();
		return 0;
	}

