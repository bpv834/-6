
#include <stdio.h>

int main(void)
{
    int num, i, cnt = 0;
    int Oddsum = 0;
    double avg = 0;

    printf("정수를입력하시오 ");
    scanf_s("%d", &num);



    for (i = 1; i <= num; i += 2)
    {
        Oddsum += i;
        cnt++;
    }


    printf("1부터%d까지의홀수합은%d입니다\n", num, Oddsum);
    printf("평균은%d:", Oddsum / cnt);

}

