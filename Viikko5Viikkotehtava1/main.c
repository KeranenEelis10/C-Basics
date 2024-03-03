#include <stdio.h>
#include <string.h>
//tehtava3
typedef struct car{
    char BRAND[20];
    char MODEL[50];
    int yearMODEL;
}car;

int main()
{
    car car1[5];
    printf("Anna viiden auton tiedot\n");
    for(int x=0;x<=4;x++){
        printf("Anna auton merkki\n");
        scanf("%s",car1[x].BRAND);
        printf("Anna auton malli\n");
        scanf("%s",car1[x].MODEL);
        printf("Anna vuosimalli\n");
        scanf("%d",&car1[x].yearMODEL);
    }
    //for(int x=0;x<=4;x++){
    //printf("Auton merkki %s\n Malli %s\n Vuosimalli %d\n",car1[x].BRAND, car1[x].MODEL, car1[x].yearMODEL);











    /*tehtava2
    typedef struct car{
        char BRAND[20];
        char MODEL[50];
        int yearMODEL;
    }car;

    int main()
    {
        car car1[3];
        printf("Anna kolmen auton tiedot\n");
        for(int x=0;x<=2;x++){
            printf("Anna auton merkki\n");
            scanf("%s",car1[x].BRAND);
            printf("Anna auton malli\n");
            scanf("%s",car1[x].MODEL);
            printf("Anna vuosimalli\n");
            scanf("%d",&car1[x].yearMODEL);
        }
        for(int x=0;x<=2;x++){
        printf("Auton merkki %s\n Malli %s\n Vuosimalli %d\n",car1[x].BRAND, car1[x].MODEL, car1[x].yearMODEL);
        }
        */
    //tehtava 1
    /*
    typedef struct car{
        char BRAND[20];
        char MODEL[50];
        int yearMODEL;
    }car;

int main()
{

    car car1;

    printf("Anna auton merkki\n");
    scanf("%s",car1.BRAND);
    printf("Anna auton malli\n");
    scanf("%s",car1.MODEL);
    printf("Anna vuosimalli\n");
    scanf("%d",&car1.yearMODEL);

    printf("Auton merkki %s\n malli %s\n vuosimalli%d\n",car1.BRAND, car1.MODEL, car1.yearMODEL);

    return0;
    */




    return 0;
}
