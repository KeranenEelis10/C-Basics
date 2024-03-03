#include <stdio.h>
/*
 * Ohjelma joka kysyy kayttajalta kaksi lukua ja tulostaa niista suuremman
 */
int main()
{
    int luku1;
    int luku2;
    printf("Anna kaksi lukua\n");
    scanf("%d %d",&luku1,&luku2);
    if (luku1<luku2){
        printf("Annoit luvut %d ja %d joista suurempi on %d",luku1,luku2,luku2);
    }
    else if (luku2<luku1){
        printf("Annoit luvut %d ja %d joista suurempi on %d\n",luku1,luku2,luku1);
    }
    return 0;
}
