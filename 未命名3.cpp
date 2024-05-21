#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b,i,n;
printf("请输入两个数：");
scanf("%c %c",&a,&b);
n = qiuyu(a,b);
prinf("%c和%c的最大公约数为&c",a,b,n);
return 0;
}
void qiuyu(int a,int b)
{
for(i = 1;i <= 10;i++)
{
		if(div(a,i) = 0 && div(b,i) = 0)
	{
		return i		
		break;	
	}
}}


