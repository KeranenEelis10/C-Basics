#include <stdio.h>

int main()
{
    int luvut[5];
    int i;

    i=0;
    while (i<5) {
        printf("Give me a number\n");
        scanf("%d",&luvut[i]);
        i++;
    }
    for (i=0);1<5;i++){
        printf("Taulukon alkio %d on d%",i,luvut[1]);
    }

    //Seuraavassa valikkoesimerkki

    int valinta=1;
    while (valinta!=3) {
        printf("1. Eka\n");
        printf("2. Toka");
        printf("3. Lopetus");
        printf("Syötä valintasi");
        scanf("%d",&valinta);
        if(valinta==1)printf("Valitsit Eka\n");
        if(valinta==2)printf("Valitsit toka\n");
    }

    return 0;
}
