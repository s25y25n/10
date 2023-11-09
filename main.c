#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    int i ;
    char a[100];
    FILE* fp;
    //1. open file
    fp = fopen("sample.txt", "w");
    //2. write file
    for(i=0;i<3;i++) {
        //print "input a word"
        printf("input a word : ");
        //scanf a string 
        scanf("%s", a);
        //fprintf
        fprintf(fp, "%s\n", a);
        
                     }
   //close file
   fclose(fp);

    
  system("PAUSE");	
  return 0;
}
