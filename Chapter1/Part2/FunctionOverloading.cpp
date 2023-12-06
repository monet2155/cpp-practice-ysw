#include <iostream>

void MyFunc(void)
{
    std::cout << "MyFunc(void) called" << std::endl;
}

void MyFunc(char c)
{
    std::cout << "MyFunc(char c) called" << std::endl;
}

// char와 int도 구분을 하는지 확인
void MyFunc(int a)
{
    std::cout << "MyFunc(int a) called" << std::endl;
}

void MyFunc(int a, int b)
{
    std::cout << "MyFunc(int a, int b) called" << std::endl;
}

int main(void)
{
    MyFunc();
    MyFunc('A');
    MyFunc(1);
    MyFunc(12, 13);
    return 0;
}