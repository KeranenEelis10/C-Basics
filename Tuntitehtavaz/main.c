#include <stdio.h>

int main()
{
    int myNum;
    int sumOfNums=0;
    int lkm;
    printf("Anna lukujen maara\n");
    scanf("%d",&lkm);

    for(int x=1; x<=lkm; x++){
        printf("Give me a number\n");
        scanf("%d",&myNum);
        sumOfNums=sumOfNums+myNum;
    }
    printf("The sum of given numbers is %d\n",sumOfNums);
    return 0;
}
