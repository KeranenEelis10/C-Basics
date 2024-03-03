#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *filepointer;
   char ch;
   filepointer=fopen("Viikko6Testi1","r");

   if (filepointer == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of file is:\n");

   while((ch = fgetc(filepointer)) != EOF)
      printf("%c", ch);

   fclose(filepointer);
   return 0;
}
