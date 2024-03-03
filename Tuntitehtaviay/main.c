#include <stdio.h>

int main()
{
    char fname[30];
    char movie[50];

    printf("What is your first name!\n");
    scanf("%s",fname);
    printf("Hello %s\n",fname);
    printf("What is your favourite movie?\n");
    fflush(stdin);
    gets(movie);
    printf("Favourite movie is %s\n",movie);
    return 0;
}
