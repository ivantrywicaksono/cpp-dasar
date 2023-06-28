#include <iostream>
#include <limits>

int main(void)
{
    int a = 2147483648;

    std::cout << a << std::endl;
    std::cout << sizeof(a) << std::endl;
    std::cout << std::numeric_limits<int>::max() << std::endl;
    std::cout << std::numeric_limits<int>::min() << std::endl;

    return 0;
}