/**
 * 사용자로부터 총 5개의 정수를 입력 받아서, 그 합을 출력하는 프로그램을 작성해 보자. 단, 프로그램의 실행은 다음과 같이 이뤄져야 한다.
 */

#include <iostream>

int main(void)
{
    int number;
    int sum = 0;

    for (int i = 1; i <= 5; i++)
    {
        std::cout << i << "번째 정수 입력: ";
        std::cin >> number;
        sum += number;
    }

    std::cout << "합계: " << sum << std::endl;

    return 0;
}