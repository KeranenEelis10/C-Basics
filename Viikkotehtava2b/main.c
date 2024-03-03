#include <stdio.h>

int main()
{
/*
 * Tehdaan C-kielinen ohjelma joka kysyy kayttajalta numeron.
 * Jos numero on pienempi kuin kymmenen ohjelma tulostaa tekstin:
 * Annoin luvun joka on pienempi kuin kymmenen
*/
    int luku;
    printf("Anna luku\n");
    scanf("%d",&luku);
    if(luku<10){
        printf("Annoit luvun joka on pienempi kuin 10\n");
    }
    else if(luku>10){
    printf("Annoit luvun joka on suurempi kuin 10\n");
    }
    return 0;
     }
