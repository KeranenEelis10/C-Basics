#include <stdio.h>
#include <string.h>

/*
struct Person_struct{
    int pnumber;
    char pname[20];
};
*/

typedef struct Person_struct{
    int pnumber;
    char pname[20];
} person;

int main()
{
    /*
    //Esim1
    struct Person_struct p1;
    struct Person_struct p2;
*/
    person p1;
    person p2;

    p1.pnumber=1234;
    strcpy(p1.pname,"Jim Morrison");

    p2.pnumber=2468;
    strcpy(p2.pname,"Jussi Kinnunen");

    printf("Person1: name = %s number = %d \n",p1.pname, p1.pnumber);
    printf("Person1: name = %s number = %d \n",p2.pname, p2.pnumber);
    return 0;
}
