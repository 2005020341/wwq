#include<stdio.h>
#include<windows.h>
void main(){
	int n;
	int a;
	int m[20][10]={
		{9,55,114,525},
		{45,454,45,45},
	};
	for(n=0;n<20;n++)
	{
		for(a=0;a<10;a++){
            m[n][a]=999;
			printf("%d  ",m[n][a]);		

	}
	printf("\n");
	}
	Sleep(5000);
		for(n=0;n<20;n++)
	{
		for(a=0;a<10;a++){
	m[n][a]=0;
	printf("%d  ",m[n][a]);		
	}
		printf("\n");
	}
	Sleep(5000);
		for(n=0;n<20;n++)
	{
		for(a=0;a<10;a++){
	m[n][a]=999;
	printf("%d  ",m[n][a]);		
	}
		printf("\n");
	}	
}
