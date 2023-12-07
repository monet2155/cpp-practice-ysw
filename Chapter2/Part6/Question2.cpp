/**
 * 다음 세 함수를 이용해서 0이상 100미만의 난수를 총 5개 생성하는 예제를 만들되, C++의 헤더를 선언해서 작성해보자.
 * 참고로 C언어의 경우 time 함수는 <time.h>에 선언되어 있고,
 * rand 함수와 srand 함수는 <stdlib.h>에 선언되어 있다.
 */

#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

const int MAX_SIZE = 5;

int main(void)
{
    srand((unsigned int)time(NULL));

    for (int i = 0; i < MAX_SIZE; i++)
    {
        cout << i << "번째 난수: " << (rand() % 100) << endl;
    }

    return 0;
}