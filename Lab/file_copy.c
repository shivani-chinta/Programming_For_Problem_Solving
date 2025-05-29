#include<stdio.h>
 void main()
 {
 FILE *f1,*f2;
 char ch;
 f1=fopen("f1.txt","r");
 f2= fopen("f2.txt","w");
 if(f1==NULL)
 {
 printf("unable to open file");
 exit();
 }
 if(f2==NULL)
 {
 printf("unable to open file");
 exit();
 }
 while((ch=getc(f1))!=EOF)
 {
 if(islower(ch))
 putc(ch-32,f2);
 else
 putc(ch,f2);
 }
 fclose(f1);
 fclose(f2);
 }