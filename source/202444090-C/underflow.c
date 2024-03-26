#include <stdio.h>

int main()
{
    unsigned short a, b, result;

    printf("unsigned short형 유효범위 : 0 ~ 65535");
    printf("1.첫번째 정수 입력 : ");
    scanf_s("%hu", &a);
    printf("2.두번째 정수 입력 : ");
    scanf_s("%hu", &b);

    result = a - b;
    printf("빽셈 연산 : %hu - %hu = %hu", a, b, result);
    return 0;
}