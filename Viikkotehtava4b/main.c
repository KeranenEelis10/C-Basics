#include <stdio.h>

int lue();
void luvunTulostus(int kluku);

int main()
{
    int luettuluku;
        luettuluku=lue();
        printf("Syotetty luku on %d\n",luettuluku);
        luvunTulostus(luettuluku);
        return 0;
    }
int lue(){
    int kluku;
    printf("Anna kokonasiluku\n");
    scanf("%d",&kluku);
    return kluku;
}
void luvunTulostus(int kluku){
    printf("Tulostettava luku on %d\n",kluku);
}
