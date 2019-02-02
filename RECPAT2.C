#include<stdio.h>
#include<conio.h>
pattern(int limit,int num);
void main()
{
 clrscr();
 int num=1,limit;
 printf("\nEnter number limit:");
 scanf("%d",&limit);
 pattern(limit,num);
 getch();
}
pattern(int limit,int num)
{
   int i;
   if(num<=limit)
   {
	for(i=0;i<num;i++)
	{
	  printf("*");
	}
	printf("\n");
	pattern(limit,num+1);
   }
}