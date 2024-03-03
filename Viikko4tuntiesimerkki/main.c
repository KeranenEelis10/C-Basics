#include <stdio.h>

int sum(int a, int b);
void second_sum(int a, int b);


int main()
{
    int calc;
    int luku1=100, luku2=200;

        calc=sum(luku1,luku2);
        printf("Luku1 on %d ja luku2 on %d\n",luku1,luku2);
        printf("The sum is %d\n",calc);
        second_sum(7,8);
        return 0;
    }

    int sum(int a, int b){
        int answer=a+b;
        a=1000;
        b=2000;
        return answer;
    }

    void second_sum(int a, int b){
        int answer=a+b;
        printf("The sum is %d\n", answer);
    }


