/**
 * 앞서 소개한 예제 RefSwap.cpp 의 SwapByRef 함수를 다음의 형태로 호출하면 컴파일 에러가 발생한다
 * SwapByRef(23, 45);
 *
 * 컴파일 에러가 발생하는 이유가 무엇인지 설명해보자.
 *
 * Answer: 참조자는 상수를 참조할 수 없다.
 */

void SwapByRef(int &ref1, int &ref2)
{
    int temp = ref1;
    ref1 = ref2;
    ref2 = temp;
}
