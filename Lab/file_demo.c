#include<stdio.h>
 void main()
 {
 FILE *f1;
 char filename[100],ch;
 printf("enter file name");
 gets(filename);
 f1=fopen(filename,"r");
 while((ch=getc(f1))!=EOF)
 putchar(ch,f1);
 fclose(f1);
 } 