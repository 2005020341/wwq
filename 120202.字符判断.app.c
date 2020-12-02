#include<stdio.h>
void main(){
char n;
scanf("%c",&n);
switch(n){
   case'w':printf("你点击上键\n");break;
   case'a':printf("你点击左键\n");break;
   case's':printf("你点击下键\n");break;
   case'd':printf("你点击右键\n");break;
   default:printf("输入有误\n");
}
}
