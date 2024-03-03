#include <stdio.h>
/*
Tehdään ohjelma joka kysyy kayttajalta kaksi lukua
Seuraavana ohjelma tulostaa kahden luvun summan erotuksen ja tulon kokonaislukuina omille riveilleen
Viimeisenä ohjelma tulostaa lukujen osamaaran desimaalilukuna omalle rivilleen
*/

int main()
{
    int luku1;
    int luku2;
    int summa;
    int erotus;
    int tulo;
    float osamaara;

    printf("Anna kaksi lukua\n");
    scanf("%d\n",&luku1);
    scanf("%d\n",&luku2);
    summa= luku1+luku2;
    printf("Lukujen summa on %d",summa);
    summa= luku1+luku2;
    printf("Hello World!\n");
    return 0;
}
