#include<stdio.h>
void main()
{
	int a;
	scanf("%d",&a);
	if(a<=100 && a>=0)
	{
		printf("贫穷打工人");
	}
	else if(a>=101 && a<=1000)
    {printf("一般打工人");
	}
	else if(a>=1001 && a<=20000)
	{printf("土豪打工人");}
	else
	{	printf("输入有误，请重新输入");
	}
}
