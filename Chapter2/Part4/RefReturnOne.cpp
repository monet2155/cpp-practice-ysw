#include <iostream>

using std::cout;
using std::endl;

int &RefReturnFunction(int &ref)
{
    ref++;
    return ref;
}

int main(void)
{
    int num1 = 1;

    // 참조의 관계가 하나 더 추가됨
    // ref는 소멸되나, ref가 참조하고있던 변수는 소멸되지 않기에 가능
    int &num2 = RefReturnFunction(num1);

    num1++;
    // num2++;

    cout << "num1: " << num1 << endl;
    cout << "num2: " << num2 << endl;

    return 0;
}