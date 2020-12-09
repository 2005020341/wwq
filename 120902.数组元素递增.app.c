#include<stdio.h>
#include<windows.h>
void main(){
	int b=1;
	int a,n;
	int m[19][20];{              
	for(n=0;n<9;n++)
	{
		for(a=0;a<10;a++){
			m[n][a]=0;
			printf("%d  ",m[n][a]);		

	}
	printf("\n");
	}
}
for(n=0;n<19;n++)
	{
		for(a=0;a<20;a++){
	m[n][a]=b++;
	printf("%d  ",m[n][a]);		
	}
		printf("\n");
	}
