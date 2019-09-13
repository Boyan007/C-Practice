#include <iostream>
#include <memory>

//using namespace std;

int main()
{
    double a{{}};
    std::shared_ptr<double>b;
    b = std::make_shared<double>(2.5);
    std::cout << *b << std::endl;
    return 0;
}
