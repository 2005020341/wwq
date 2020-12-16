#include<stdio.h>
int buff(int a){
	if(a<=0){
		return 0;
	}
	return a+buff(a-1);
}
void main(){
	int b;
	scanf("%d",&b);
	if(b>=0){
		printf("%d\n",buff(b));}
	else{
	printf("输入有误\n");
	}
}


