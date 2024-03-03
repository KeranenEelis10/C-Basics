#include <stdio.h>

int main()
{
    /* Tehdaan ohjelma joka tulostaa kayttajalle valikon josta kayttaja voi valita kolme vaihtoehtoa
     * Ohjelma kaskee kayttajaa valitsemaan numeron 1, 2 tai 9
     * Numero 1 tulostaa valittu nelion kehan pituus
     * Numero 2 tulostaa valittu ympyran kehan pituus
     * Numero 9 lopettaa ohjelman
     * Ohjelma loppuu vasta kun kayttaja on valinnut numeorn yhdeksan
     *
    int luku;
    printf("Valitse yksi, kaksi tai yhdeksan\n");
    printf("1. Nelion kehan pituus\n");
    printf("2. Ympyran kehan pituus\n");
    printf("9. Lopetus\n");
    scanf("%d",&luku);
    while(luku==1){
        printf("Valittu nelion kehan pituus");
        break;
    }

    while(luku==2){
        printf("Valittu ympyran kehan pituus");
        break;
    }
    while(luku==9){
        printf("Game over");
        break;
    }
    if(luku!=1)
    if(luku!=2)
    if(luku!=9){
        printf("Error");
    }
    */
    int myNum=1;
        int sumOfNums=0;
        while (myNum > 0) {
            printf("Give me a number\n");
            scanf("%d",&myNum);
            sumOfNums+=myNum;
        }
        printf("The sum of given numbers is %d\n",sumOfNums);

    return 0;
}
