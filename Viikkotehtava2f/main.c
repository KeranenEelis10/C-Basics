#include <stdio.h>
/*
 * Tehdaan ohjelma joka kysyy opiskelijan ID-numeron, nimen ja kolmen osasuorituksen pistemäärän
 * Lisaksi ohjelma laskee kolmen suorituksen keskiarvon ja tulostaa arvosanan
 * kiitettava, hyva, valttava, hylatty
 */

int main()
{
    int IDnumero;
    char nimi;
    float suoritus1;
    float suoritus2;
    float suoritus3;
    float summa;
    float ka;
    char arvosana;
    printf("Anna ID-numerosi\n");
    scanf("%d",&IDnumero);
    printf("Anna nimesi\n");
    scanf("%c",&nimi);
    printf("Anna suorituksen 1 arvosana\n");
    scanf ("%f",&suoritus1);
    printf("Anna suorituksen 2 arvosana\n");
    scanf("%f",&suoritus2);
    printf("Anna suorituksen 3 arvosana\n");
    scanf("%f",&suoritus3);
    summa=suoritus1+suoritus2+suoritus3;
    ka=suoritus1+suoritus2+suoritus3/3;

    printf("Opiskelijan ID-numero %d",IDnumero);
    printf("Opiskelijan nimi %d",nimi);
    printf("Suoritus 1 %.1f",suoritus1);
    printf("Suoritus 2 %.1f",suoritus2);
    printf("Suoritus 3 %.1f",suoritus3);
    printf("Pisteet yhteensa %.1f",summa);
    printf("Keskiarvo %.1f",ka);
    if(ka<40){
        printf("Arvosanasi on hylätty\n");
    }
    else if(ka<=59){
        printf("Arvosanasi on valttava\n");
    }
    else if(ka<=79){
        printf("Arvosanasi on hyva\n");
    }
    else if(ka>=80){
        printf("Arvosanasi on kiitettava");
    }
return 0;
    }
