#include <stdio.h>
#define LKM 3

void tulostaMjono(char mj[]);
void lueluvut(int tau[], int lukum);
void tulostaluvut(int tau[],int lukum);

int main()
{
    char nimi[30]="Pekka";
    int luvut[LKM];

    tulostaMjono("Eka tulostus");
    tulostaMjono(nimi);
    lueluvut(luvut,LKM);
    tulostaluvut(luvut,LKM);

    return 0;
}

void tulostaMjono(char mj[]){
    printf("%s\n",mj);
}

void lueluvut(int tau[], int lukum){
    for(int i=0;i<lukum;i++){
        printf("Anna luku\n");
        scanf("%d",&tau[i]);
    }
}

void tulostaluvut(int tau[],int lukum){
    printf("Taulukon alkiot ovat\n");
    for(int i=0;i<lukum;i++)
        printf("%d\n",tau[i]);
}
