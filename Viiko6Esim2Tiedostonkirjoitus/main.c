#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *filepointer;
   char ch;
   filepointer=fopen("C:/work/syksy22/JohdOhjS22/Viikko6testi1","a");

   if (filepointer == NULL)
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }
   //tiedostoon kirjoitus
   fprintf(filepointer,"Hello world\n");
   fprintf(filepointer,"Hello world again\n");

   char merkki='a';
   fputc(merkki, filepointer);
   fputc('B', filepointer);
   fputc('C', filepointer);
   fputc('\n', filepointer);
   fputc('D', filepointer);

   fclose(filepointer);
   return 0;
}
