#include<stdio.h>
#include<windows.h>
void main(){
	int mun=6;
	int s;
	do
	{    scanf("%d",&s);

	if(s==mun)
	{printf("恭喜你答对了\n");
	}
	else if(s>mun){
	printf("你猜的太大了\n");
	}
else if(s<mun){
	printf("你猜的太小了\n");
	}}
	while(1);

system("pause");
}
