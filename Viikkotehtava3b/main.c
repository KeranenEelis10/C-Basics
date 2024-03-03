#include <stdio.h>

int main()
{
    /*
     * Tehdaan ohjelma joka kysyy kayttajan nimen ja sitten kuinka monta kertaa se tulostetaan
     * Tehdaan tehtava erikseen while, do while ja for toistoilla
     */
    char nimi[30];
    int lkm;
    int laskuri;

    printf("Anna nimi\n");
    scanf("%s",nimi);
    printf("Montako kertaa tulostetaan?\n");
    scanf("%d",&lkm);
    laskuri=0;

    /*while(laskuri<lkm){
        printf("%s\n",nimi);
        laskuri++;
    }

    printf("Hello World!\n");
    */
    laskuri=0;
    /*do {
        printf("%s\n",nimi);
        laskuri++;
    } while(laskuri<lkm);
    */
    for(laskuri=0;laskuri<lkm;laskuri++){
        printf("%s\n",nimi);
    }



    return 0;
}
