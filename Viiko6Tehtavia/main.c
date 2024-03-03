#include <stdio.h>
#include <stdlib.h>

//Tehtävä 1
/*int main()
{
    FILE *Nimitiedosto;
    char nimi[30];
    Nimitiedosto=fopen("C:/Work/Syksy22/JohdOhjS22/Nimitiedosto.txt","w");

    if (Nimitiedosto == NULL)
    {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
    }
    printf("Anna nimi\n");
    scanf("%s",&nimi);
    fprintf(Nimitiedosto,"Nimesi on %s",nimi);
    fclose(Nimitiedosto);

    return 0;
}
*/
/*
//Tehtävä2
int main()
{
    FILE *Tiedostokansio;
    FILE *Target;
    char tiedot;
    Tiedostokansio=fopen("C:/Work/Syksy22/JohdOhjS22/Source.txt","r");
    Target=fopen("C:/Work/Syksy22/JohdOhjS22/Target.txt","w");

    if ((Tiedostokansio == NULL)||(Target==NULL))
    {
       perror("Error while opening the file.\n");
       exit(EXIT_FAILURE);
    }

    while((tiedot = fgetc(Tiedostokansio)) != EOF)
        if(tiedot==',')fputc(';',Target);
     else fputc(tiedot,Target);


    fclose(Tiedostokansio);
    fclose(Target);

    return 0;
}
*/











