#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int n;
    char c;
    FILE* fp;
    
    fp = fopen("sample.txt","r");
    if (fp == NULL) 
    {
           printf("failed to open\n");
       }
       
    while( (c=fgetc(fp)) != EOF) //�ѱ��� �Է� 
    {
        putchar(c); // �ѱ��� ��� 
    }
   
   fclose(fp);

    
  system("PAUSE");	
  return 0;
}
