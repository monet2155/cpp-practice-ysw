#include <cmath>
#include <cstdio>
#include <cstring>

// C의 표준함수도 std에 선언되어 있음, 이 문장을 빼면 abs에서 warning 발생 (%f인데 abs의 반환값이 int라서)
// std에는 abs가 오버로딩 되어있음 (C에는 int만)
using namespace std;

int main(void)
{
    char str1[] = "Result";
    char str2[30];

    strcpy(str2, str1);
    printf("%s: %f \n", str1, sin(0.14));
    printf("%s: %f \n", str2, abs(-1.25));

    return 0;
}