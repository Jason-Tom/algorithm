#include <stdio.h>

int main()
{
   FILE *fp;

   fp = fopen("file.txt", "w");

   fprintf(fp, "%s", "������ w3cschool.cc");
   fclose(fp);

   return(0);
}
