#include <stdio.h>
#include <string.h>
int main()
{
    /*
    //kahden merkkijonon vertailu strcmp()-kirjastofunktiolla
    char mjluettu[30];
    char mjsana[]="LOPETUS";

    while(strcmp(mjluettu,mjsana)!=0){
        printf("Tulostetaan kunnes syotat LOPETUS\n");
        scanf("%s", mjluettu);
    }
    printf("Hello World!\n");
    return 0;
    */


    //osoittimen kaytto esimerkki
    int xMuuttuja=5;
    int *mypointer;

    mypointer=&xMuuttuja;

    *mypointer=*mypointer+1000;

    printf("x:n arvo eli *mypointer on %d\n",*mypointer);
    printf("x:n osoite eli mypointer on %p\n",mypointer);

    return 0;
}
