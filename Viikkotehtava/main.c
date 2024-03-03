#include <stdio.h>
/*
Ohjelma laskee kolmen saman suuruisen ympyrän pinta-alan
A=3(r*r*pii)
 */


int main()
{
        int lkm=3;
        float pii=3.14;
        float sade;
        float ala;

        printf("Syota ympyran sade\n");
        scanf("%f",&sade);
        ala=lkm*(sade*sade*pii);//lasketaan pinta-ala

        printf("Kolmen ympyran sateet ovat %f ja alat ovat %f\n", sade, ala);
    return 0;
}
