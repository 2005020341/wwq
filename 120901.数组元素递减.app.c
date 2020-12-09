#include<stdio.h>
#include<windows.h>
void main(){
	int b=90;
	int a,n;
	int m[9][10] ;{              
	for(n=0;n<9;n++)
	{
		for(a=0;a<10;a++){
			m[n][a]=0;
			printf("%d  ",m[n][a]);		

	}
	printf("\n");
	}
}
for(n=0;n<9;n++)
	{
		for(a=0;a<10;a++){
	m[n][a]=b--;
	printf("%d  ",m[n][a]);		
	}
		printf("\n");
	}
}
