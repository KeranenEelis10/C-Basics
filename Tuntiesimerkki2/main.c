#include <stdio.h>

int main()
{
    int luku;
    //luku=2;
    //luku=5;

    printf("Anna kokonaisluku\n");
    scanf("%d",&luku);

    if (luku>4) {
        luku=luku+2;
        printf("Luku on suurempi kuin nelja\n");
        printf("Moi\n");
    }
    else{
        printf("Luku on 4 tai sita pienempi\n");
    }

    //if rakenne jossa haarassa vain yksi lause voidaan kirjottaa seuraavasti

    if (luku>4)
        printf("Toinen tulostus: Luku on suurempi kuin nelja\n");

    else
        printf("Toinen tulostus: Luku on 4 tai sita pienempi\n");

    printf("Lopetusrivi\n");
    return 0;
}
