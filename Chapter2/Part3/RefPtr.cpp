#include <iostream>
using std::cout;
using std::endl;

int main(void)
{
    int num = 12;
    int *ptr = &num;
    int **dptr = &ptr;

    // int 변수의 참조자
    int &ref = num;
    // int 변수를 가리키는 포인터 변수의 참조자
    int *(&pref) = ptr;
    // int 변수를 가리키는 포인터 변수를 가리키는 포인터 변수의 참조자
    int **(&dpref) = dptr;

    cout << ref << endl;
    // 포인터가 가리키는 변수의 값
    cout << *pref << endl;
    // 포인터가 가리키는 포인터가 가리키는 변수의 값
    cout << **dpref << endl;

    return 0;
}