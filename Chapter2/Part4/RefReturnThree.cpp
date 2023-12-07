#include <iostream>

using std::cout;
using std::endl;

// 반환값이 int인 경우 참조자로는 받을 수 없다
int RefReturnFunction(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1 = 1;
    int num2 = RefReturnFunction(num1);

    num1 += 1;
    num2 += 100;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}