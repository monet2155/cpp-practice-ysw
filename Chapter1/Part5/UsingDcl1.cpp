#include <iostream>

namespace Hybrid
{
    void HybFunc(void)
    {
        std::cout << "So simple function!" << std::endl;
        std::cout << "In namespace Hybrid!" << std::endl;
    }
} // namespace Hybrid

int main(void)
{
    using Hybrid::HybFunc;
    HybFunc();
    return 0;
}