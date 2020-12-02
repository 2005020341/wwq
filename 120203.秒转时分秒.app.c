#include<stdio.h>
void main()
{
	int m=0,n=0,a=0;
	scanf("%d",&m);
	while(m >=60)
	{
		m -= 60,n += 1;
		while(n >= 60)
		{
			n -= 60,a +=1;
			if(a>23)
			{
				printf("输入有误\n");
				return;
			}
		}
	
	}
	printf("%02d:%02d:%02d\n",a,n,m);

}
