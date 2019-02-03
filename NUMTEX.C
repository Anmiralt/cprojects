#include<stdio.h>
#include<conio.h>
void elv(int);
void ones(int);
void tens(int);
void main()
{
	int num,temp1,temp2;
	clrscr();
	up:printf("\nENTER A TWO DIGIT NUMBER:");
	scanf("%d",&num);
	if(num>=0 && num<100)
	{
		temp1=num%10;
		temp2=num/10;
		if(temp2==1)
		{
			elv(temp1);
		}
		else
		{
			 if(temp2==0)
			  {
					ones(temp1);
			  }
			 else
			  {
					if(temp1==0)
					{
						tens(temp2);
					}
					else
					{
						tens(temp2);
						ones(temp1);
					}
			  }
		}
	}
	else
	{
	  printf("\nINVALID ENTRY");
	  goto up;
	}
	getch();
}
void elv(int temp1)
{
	switch(temp1)
	{
		case 1:printf("%s","eleven");
			  break;
		case 2:printf("%s","twelve");
			  break;
		case 3:printf("%s","thirteen");
			  break;
		case 4:printf("%s","fourteen");
			  break;
		case 5:printf("%s","fifteen");
			  break;
		case 6:printf("%s","sixteen");
			  break;
		case 7:printf("%s","seventeen");
			  break;
		case 8:printf("%s","eighteen");
			  break;
		case 9:printf("%s","nineteen");
			  break;
		case 0:printf("%s","ten");
			  break;
	}
}
void tens(int temp2)
{
	switch(temp2)
	{
		case 2:printf("%s","twenty");
			  break;
		case 3:printf("%s","thirty");
			  break;
		case 4:printf("%s","forty");
			  break;
		case 5:printf("%s","fifty");
			  break;
		case 6:printf("%s","sixty");
			  break;
		case 7:printf("%s","seventy");
			  break;
		case 8:printf("%s","eighty");
			  break;
		case 9:printf("%s","ninety");
			  break;

	}
}
void ones(int temp1)
{
	switch(temp1)
	{
		case 1:printf("%s","one");
			  break;
		case 2:printf("%s","two");
			  break;
		case 3:printf("%s","three");
			  break;
		case 4:printf("%s","four");
			  break;
		case 5:printf("%s","five");
			  break;
		case 6:printf("%s","six");
			  break;
		case 7:printf("%s","seven");
			  break;
		case 8:printf("%s","eight");
			  break;
		case 9:printf("%s","nine");
			  break;
		case 0:printf("%s","zero");
			  break;
	}
}