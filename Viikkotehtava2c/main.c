#include <stdio.h>

int main()
{
/*
 * Tehdaan ohjelma joka kysyy kayttajalta kuukauden ostosten euromaaran
 * Jos euromaara alle 100€ tulee bonusta 10%
 * Jos euromaara 100-300€ tulee bonusta 15%
 * Jos euromaara 300-500€ tulee bonusta 20%
 * Jos euromaara suurempi kuin 500€ tulee bonusta 25%
 */
    float ostot;
    float alehinta;
    printf("Paljon olet tassa kuussa kayttanyt rahaa ostoksiin?\n");
    scanf("%f", &ostot);
    if (ostot<100){
        alehinta=ostot*0.9;
                printf("Saat bonusta 10 prosenttia eli ostostesi summa on %.1f\n",alehinta);
    }
    else if (ostot<300){
        alehinta=ostot*0.85;
                printf("Saat bonusta 15 prosenttia eli ostostesi summa on %.1f\n", alehinta);
    }
    else if (ostot<500){
        alehinta=ostot*0.80;
        printf("Saat bonusta 20 prosenttia eli ostostesi summa on %.1f\n");
    }
    else if (ostot>500){
        alehinta=ostot*0.75;
        printf("Saat bonusta 25 prosenttia eli ostostesi summa on %.1f\n");
    }
    return 0;
}
