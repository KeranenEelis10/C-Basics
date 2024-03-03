#include <stdio.h>

int main()
{
    /*Tehdaan ohjelma joka kysyy kayttajalta kokonaisluvun ja sitten tulostaa
     * annetun kokonaisluvun kymmenen kertotaulun
     */
    //int luku;
    //int kertoja1=1;
    //int kertoja2=2;
    /*int myNum;
        int sumOfNums=0;
        for(int x=1; x<=5; x++){
            printf("Give me a number\n");
            scanf("%d",&myNum);
            sumOfNums=sumOfNums+myNum;
        }
        printf("The sum of given numbers is %d\n",sumOfNums);
    return 0;*/
    int luvut[1]={1,2,3,4,5,6,7,8,9,10};
    int kertoja;
    int summa;
    printf("Anna luku");
    scanf("%d",&kertoja);
    summa=kertoja*luvut[1];
    printf(summa);

}

