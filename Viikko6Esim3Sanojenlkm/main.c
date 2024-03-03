#include <stdio.h>
#include <stdlib.h>

int main()
{
   FILE *filepointer;
   FILE *tokapointer;
   char ch;
   filepointer=fopen("C:/Work/Syksy22/JohdOhjS22/Viikko6testi1","r");
   tokapointer=fopen("C:/Work/Syksy22/JohdOhjS22/Viikko6testi1","w");


   if ((filepointer == NULL)||(tokapointer==NULL))
   {
      perror("Error while opening the file.\n");
      exit(EXIT_FAILURE);
   }

   printf("The contents of file is:\n");


   //Merkin vaihto
   while((ch = fgetc(filepointer)) != EOF){
      if(ch==',')fputc(';',tokapointer);
      else fputc(ch,tokapointer);
   }
      printf("%c", ch);

   fclose(filepointer);
   return 0;
}
