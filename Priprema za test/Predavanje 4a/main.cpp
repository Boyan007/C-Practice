#include <iostream>

//using namespace std;
void Udvostruci(int &x) {
    x *= 2;
}

int main()
{
    int a(5);
    int &x(a);
    std::cout << x << std::endl;
    return 0;
}
