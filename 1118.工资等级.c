#include<stdio.h>
void main(){
	int a;
	scanf("%d",&a);
	if(a<=-1){
	printf("你还有花呗没还，不能使用这个程序。");}
	else if(a>=0&&a<=500){
		printf("赤贫。");
	}
	else if(a>=501&&a<=1500){
		printf("贫困。");
	}
	else if(a>=1501&&a<=3000){
		printf("普通打工人。");
	}
	else if(a>=3001&&a<=5000){
		printf("清洁工。");
	}
	else if(a>=5001&&a<=12000){
		printf("水电工。");
	}
	else if(a>=12001&&a<=50000){
		printf("大老板。");
	}
	else if(a>=50001){
		printf("程序员。");
	}

}
