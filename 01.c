#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   FILE* fp;
   char c;
   
   fp = fopen("sample.txt","r");
   if (fp == NULL)
   {
          printf("failed to open\n");
          return 0;
   }
   
   while ((c=fgetc(fp)) != EOF)//¿ÀÀ×?À½... 
   {
         putchar(c);
   }      
   fclose(fp);
   
  system("PAUSE");	
  return 0;
}
