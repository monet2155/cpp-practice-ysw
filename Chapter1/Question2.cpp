/**
 * 프로그램 사용자로부터 이름과 전화번호를 문자열의 형태로 입력 받아서, 입력 받은 데이터를 그대로 출력하는 프로그램을 작성해 보자.
 */

#include <iostream>

int main(void)
{
    char name[100];
    char phoneNumber[100];

    std::cout << "이름: ";
    std::cin >> name;

    std::cout << "전화번호: ";
    std::cin >> phoneNumber;

    std::cout << "내 이름은 " << name << "입니다." << std::endl;
    std::cout << "전화번호는 " << phoneNumber << "입니다." << std::endl;

    return 0;
}