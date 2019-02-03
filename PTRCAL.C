#include<stdio.h>
#include<conio.h>
int add(int,int);
int sub(int,int);
int mul(int,int);
int div(int,int);
int rem(int,int);
int calculate(int(*ptr)(int,int),int,int);
void main()
{
	int out,num1,num2;
	clrscr();
	printf("\nENTER FIRST NUMBER:");
	scanf("%d",&num1);
	printf("\nENTER SECOND NUMBER:");
	scanf("%d",&num2);
	out=calculate(rem,num1,num2);
	printf("\nOUTPUT:%d",out);
	getch();
}
int calculate(int(*ptr)(int,int),int num1,int num2)
{
	return ptr(num1,num2);
}
int add(int num1,int num2)
{
	return (num1+num2);
}
int sub(int num1,int num2)
{
	return num1-num2;
}
int mul(int num1,int num2)
{
	return num1*num2;
}
int div(int num1,int num2)
{
	return num1/num2;
}
int rem(int num1,int num2)
{
	return num1%num2;
}