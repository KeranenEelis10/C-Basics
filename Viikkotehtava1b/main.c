#include <stdio.h>
/*
 Lasketaan suorakulmaisen kolmion ala kun kanta=7 ja korkeus=4
 Tulostetaan ala lopuksi
 */

int main()
{

    int kanta=7;
    int korkeus=4;
    float ala=kanta*korkeus;
    printf("Kolmion kanta on 7 ja korkeus 4\n");
    printf("Lasketaan kolmion pinta-ala kanta*korkeus/2\n");
    ala=kanta*korkeus/2;
    printf("Kun kanta=7 ja korkeus=4 ala on silloin\n");
    printf("%.1f\n",ala);

    return 0;
}
