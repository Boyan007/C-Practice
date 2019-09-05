#include <iostream>

template <typename NekiTip>

NekiTip VeciOd(NekiTip x, NekiTip y) {
    if(x > y) return x;
    else return y;
}

int main()
{
    std::cout << "Hello world!" << std::endl;
    return 0;
}
