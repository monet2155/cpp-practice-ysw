/**
 * 참조자를 이용해서 다음 요구사항에 부합하는 함수를 각각 정의하여라.
 * 1. 인자로 전달된 int형 변수의 값을 1씩 증가시키는 함수
 * 2. 인자로 전달된 int형 변수의 부호를 바꾸는 함수
 */

#include <iostream>

using std::cout;
using std::endl;

void AddOne(int &num)
{
    num++;
}

void ChangeSign(int &num)
{
    num *= -1;
}

int main(void)
{
    int num = 10;

    AddOne(num);

    cout << "After add one: " << num << endl;

    ChangeSign(num);

    cout << "After change sign: " << num << endl;

    return 0;
}