#include<stdio.h>
#include<conio.h>
pattern(int limit,int num);
void main()
{
 int num,limit=1;
 clrscr();
 printf("\nEnter number limit:");
 scanf("%d",&num);
 pattern(limit,num);
 getch();
}
pattern(int limit,int num)
{
   int i=0;
   if(num>=limit)
   {
	for(i=0;i<num;i++)
	{
	  printf("*");
	}
	printf("\n");
	pattern(limit,num-1);



}




}