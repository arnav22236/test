#include<stdio.h>
int fact(int z)
{
	int l=1,i;
	for(i=2 ; i<z; i=i+1)
	{
		if(z%i==0)
		{
			l=2;
			break;
		}
	}
	if(l==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int pto(int x)
{
	int m=2,n,k;
	while(k<x)
	{
		n=fact(m);
		if(n==0)
		{
			printf("%d\t",m);
			k=k+1;
		}
		m=m+1;
	}
}

int main()
{
	int a,b;
	printf("enter how many prime numbers you want--> ");
	scanf("%d",&a);
	b=pto(a);
	return 0;
}
