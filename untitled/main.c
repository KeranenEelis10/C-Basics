#include <stdio.h>
#define LUKUMAARA 3

int main()
{
    int luvut[LUKUMAARA];
    int i,j;

    i=0;
    printf("Anna %d lukua\n",LUKUMAARA);
    while(i<LUKUMAARA){
        printf("Anna luku\n");
        scanf("%d",&luvut[i]);
        i++;  //sama kuin i=i+1
    }
    printf("Taulukossa on luvut\n");
    for(j=0;j<LUKUMAARA;j++)
        printf("%d\n",luvut[j]);
    printf("Toinen taulukon tulostus\n");
    i=0;
    do{
            printf("%d\n",luvut[i]);
            i++;
}
            while(i<LUKUMAARA);





    return 0;
}
