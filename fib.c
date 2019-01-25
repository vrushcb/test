#include<stdio.h>
#include<math.h>

void main()
{

int a=0,b=1,show=0;

int i,n;

printf("Enter a no.:");
scanf("%d",&n);
for(i=2;i<=n;++i)
{
	show=a+b;
	a=b;
	b=show;
}

printf("list is:",&show);

getch();

}
