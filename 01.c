#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
   FILE* fp;
   
   char str[100];//공간이야~~ 
   int i;
   
   fp = fopen("sample.txt","w");
   
   for(i=0;i<3;i++)
   {
        printf("input a word: ");
        scanf("%s",str);// & 안 써도 됩니다요 
   
        fprintf(fp, "%s\n", str);//fp 
        }
   
   
   
   
   fclose(fp);
   
   
  system("PAUSE");	
  return 0;
}
