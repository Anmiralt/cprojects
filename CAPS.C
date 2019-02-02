#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	char *ptr,ch,*res;
	int length,offset=0,count=0,i=0;
	clrscr();
	printf("\n[^] means caps on \n");
	printf("\nEnter the string:");
	ch=fgetc(stdin);
	length=stdin->level;
	ptr=(char*)calloc(length+1,sizeof(char));
	res=(char*)calloc(length+1,sizeof(char));
	ptr[offset]=ch;
	offset=1;
	while(1)
	{
		ch=fgetc(stdin);
		if(ch=='\n')break;
		ptr[offset++]=ch;
	}
	ptr[offset]='\0';
	offset=0;
	printf("\nString:%s",ptr);
	while(1)
	{
	  if(ptr[offset]=='\0')break;
	  if(ptr[offset]=='^')
	  {
	    i++;
	    offset++;
	  }
	    if(i%2!=0)
	   {
	     if(ptr[offset]>=97&&ptr[offset]<=122)
	     {
	       res[count]=ptr[offset]^32;
	       count++;
	       offset++;
	     }
	     else
	     {
	       res[count]=ptr[offset];
	       count++;
	       offset++;
	     }
	   }
	   else
	   {
	     res[count]=ptr[offset];
	     count++;
	     offset++;
	   }
	}
	printf("\nRESULT:%s",res);
	getch();
}