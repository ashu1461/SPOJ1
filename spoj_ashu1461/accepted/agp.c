#include<stdio.h>
int main()
{

	int n;
	scanf("%d",&n);
	while(n>0)
	{
	int a,b,c;
	scanf("%d %d %d",&a,&b,&c);
	if(b-a==c-b)
	{
		printf("%d\n",c+c-b);
	}
	else
		printf("%d\n",c*c/b);
	n--;
	}
	return 0;
}
