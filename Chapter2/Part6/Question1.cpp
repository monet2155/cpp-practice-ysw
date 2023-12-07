/**
 * 다음 표준함수를 호출하는 예제를 만들되, C++의 헤더를 선언해서 만들어보자.
 * 그리고 예제의 내용은 상관이 없지만, 아래의 함수들을 최소 1회 이상 호출해야 한다.
 * 참고로 다음 함수들은 C언어의 경우 <string.h>에 선언되어 있다.
 *
 * 1. strlen 문자열의 길이 계산
 * 2. strcat 문자열 뒤에 덧붙이기
 * 3. strcpy 문자열 복사
 * 4. strcmp 문자열 비교
 */

#include <iostream>
#include <cstring>

// 위 함수들도 std에 선언되어있다..
using namespace std;

int main(void)
{
    char str[] = "test";
    char str2[20];
    char addedStr[] = " added";

    cout << "strlen: " << strlen(str) << endl;

    strcat(str, addedStr);
    cout << "strcat: " << str << endl;

    strcpy(str2, str);
    cout << "strcpy(str2): " << str2 << endl;

    cout << "strcmp: " << strcmp(str, str2) << endl;

    return 0;
}