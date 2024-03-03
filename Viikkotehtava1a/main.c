#include <stdio.h>

int main()
{
/*
 Muutetaan lämpötila celcius farenheight asteiksi
 */

    float celcius;
    float farenheight;
    printf("Anna celciusaste\n");
    scanf("%f", &celcius);
    // celciuksesta farenheightiin kaava on celcius*1.8+32
    farenheight= celcius*1.8+32;
    printf("%.1f Anatamasi lampotila on farenheigth asteina %.1f\n",celcius, farenheight);
    return 0;
}
