#include <stdio.h>

int main()
{
    int ekaLuvut[]={10,20,30};
    int tokaLuvut[3]={2,4,6};
    int tulos[3];

    //Summataan ekaluvut- ja tokaluvut taulukon
    //vastaavat alkiot ja tulos tallennetaan tulos-taulukkoon
    tulos[0]=ekaLuvut[0]+tokaLuvut[0];
    tulos[1]=ekaLuvut[1]+tokaLuvut[1];
    tulos[2]=ekaLuvut[2]+tokaLuvut[2];

    printf("Tulos-taulukon sisalto on: %d,%d ja %d\n",tulos[0],tulos[1],tulos[2]);


    return 0;
}
