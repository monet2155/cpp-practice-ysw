#include <iostream>
using std::cin;
using std::cout;
using std::endl;

bool IsPositive(int num)
{
    return (num > 0);
}

int main(void)
{
    int num;
    cout << "Input number: ";
    cin >> num;

    cout << (IsPositive(num) ? "Positive" : "Negative")
         << " number" << endl;

    return 0;
}