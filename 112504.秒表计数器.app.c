#include<stdio.h>
#include<windows.h>
void main(){
int m;
int a=99999999999999;
for(m=1;m<=a;m++)
{
	printf("现在是%d秒\n",m);
		Sleep(1000);
}
}
