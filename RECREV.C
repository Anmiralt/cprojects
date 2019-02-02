#include<stdio.h>
#include<conio.h>
int revnum(int num);
void main()
{
 int num,no;
 clrscr();
 printf("\nEnter a number:");
 scanf("%d",&num);
 no=revnum(num);
 printf("\nReversed number:%d",no);
 getch();
}
 int no=0,rem;
  revnum(int num)
{

 if(num)
 {
  rem=num%10;
  no=no*10+rem;
  revnum(num/10);
 }
 else return 0;
 return no;
}