#include<stdio.h>
void main()
{
	int a;
	int b;
	int d;
	int c;
	printf("输入三个数\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
	d=a;
	a=b;
	b=d;
	}
	if(a>c){
	d=a;
	a=c;
	c=d;
	}
    if(b>c){
    d=b;
	b=c;
	c=d;
	}
	printf("升序排列，\n%d\n%d\n%d\n",a,b,c);
}
