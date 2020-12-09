#include<stdio.h>
#include<string.h>
void main(){
	char a1[]="我很好，谢谢你的关心";
	char a2[]="我不好，感谢你的关心";
	if(strcmp(a1,a2)==0){
	printf("相同\n");
}
	else{
printf("不相同\n");
}
}
