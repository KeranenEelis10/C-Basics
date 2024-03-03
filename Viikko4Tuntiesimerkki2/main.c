#include <stdio.h>

int main()
{
    int eka, toka;

    eka=10;
    toka=20;
    eka+=toka;
    //on sama kuin eka=eka+toka;
    //eka-=toka on sama kuin eka=eka-toka;
    toka++; //on toka=toka+1
    eka--; // on sama kuin eka=eka-1
    printf("eka on %d\n",eka);
    printf("toka on %d\n",toka);
    return 0;
}
