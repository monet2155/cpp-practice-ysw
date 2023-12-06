/**
 * 다음 main 함수에서 필요로 하는 swap 함수를 오버로딩 해서 구현해보자.
 */

#include <iostream>

void swap(int *num1, int *num2);
void swap(char *ch1, char *ch2);
void swap(double *num1, double *num2);

int main(void)
{
    int num1 = 20;
    int num2 = 30;
    swap(&num1, &num2);
    std::cout << num1 << ' ' << num2 << std::endl;

    char ch1 = 'A';
    char ch2 = 'Z';
    swap(&ch1, &ch2);
    std::cout << ch1 << ' ' << ch2 << std::endl;

    double dbl1 = 1.111;
    double dbl2 = 5.555;
    swap(&dbl1, &dbl2);
    std::cout << dbl1 << ' ' << dbl2 << std::endl;

    return 0;
}

void swap(int *num1, int *num2)
{
    int temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}

void swap(char *ch1, char *ch2)
{
    char temp = *ch1;
    *ch1 = *ch2;
    *ch2 = temp;
}
void swap(double *num1, double *num2)
{
    double temp = *num1;
    *num1 = *num2;
    *num2 = temp;
}