#include <stdio.h>

int main()
{
    /*
     * Tehdaan sovellus joka kysyy kayttajalta salanumeron
     * jos salanumero arvataan oikein kayttajaa onnitellaan
     * jos salanumero on vaarin pitaa arvata uudestaan
     */
    int numero=1;

    while(numero!=17){
        printf("Anna numero\n");
        scanf("%d",&numero);
    }
    if(numero==17){
        printf("Onnittelut numerovalinnasta!\n");
    }


    return 0;
}
