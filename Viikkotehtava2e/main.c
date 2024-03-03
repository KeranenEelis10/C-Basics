#include <stdio.h>
/*
 * Tehdaan ohjelma joka kysyy kayttajalta numeron ja ohjelma antaa kayttajalle numeroa vastaavan viikonpaivan
 */
int main()
{
    int viikonpaiva;
    printf("Anna numero valilla 1-7\n");
    scanf("%d",&viikonpaiva);
    switch(viikonpaiva){
    case 1:{
        printf("Maanantai");
        break;
    }
    case 2:{
        printf("Tiistai");
        break;
    }
    case 3:{
        printf("Keskiviikko");
        break;
    }
    case 4:{
        printf("Torstai");
        break;
    }
    case 5:{
        printf("Perjantai");
        break;
    }
    case 6:{
        printf("Lauantai");
        break;
    }
    case 7:{
        printf("Sunnuntai");
        break;
    }
    default:{
        printf("Annoit numeron jolle ei ole viikonpaivaa\n");
        break;
    }
    }

    return 0;
}
