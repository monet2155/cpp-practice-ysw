#include <iostream>

namespace BestComImpl
{
    void SimpleFunc(void);
} // namespace BestComImpl

namespace ProgComImpl
{
    void SimpleFunc(void);
} // namespace ProgComImpl

int main(void)
{
    BestComImpl::SimpleFunc();
    ProgComImpl::SimpleFunc();

    return 0;
}

void BestComImpl::SimpleFunc(void)
{
    std::cout << "BestCom이 정의한 함수" << std::endl;
}

void ProgComImpl::SimpleFunc(void)
{
    std::cout << "ProgCom이 정의한 함수" << std::endl;
}