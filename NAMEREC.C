#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
char*fun(int offset);
void main()
{
 char *res;
 int offset=0;
 clrscr();
 printf("\nEnter the name:");
 res=fun(offset);
 printf("%s",res);
 getch();
}
char*fun(int offset)
{
 char ch,*ptr;
 ch=fgetc(stdin);
 if(ch=='\n')
 {
  ptr=(char*)calloc(offset,sizeof(char));
 }
 else
 {
  fun(offset+1);
 }
 ptr[offset]=ch;
 return(ptr);
}