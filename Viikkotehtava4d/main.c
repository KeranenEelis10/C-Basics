#include <stdio.h>

float tulo();


int main()
{
    float luettuluku;
    luettuluku=tulo();
    printf("Tulos on %.2f\n",luettuluku);
    return 0;

}

float tulo(){
    float lkm;
    printf("Anna luku\n");
    scanf("%f",&lkm);
    lkm=lkm*3;
    return lkm;

}
