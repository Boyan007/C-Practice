#include <iostream>
//#include "Another.h"

//using namespace std;

int k = 2;
//static int j = 5;

//void Write(){
//    std::cout << j;
//}
static void fun1(int a)
{
    std::cout << a;
}

//static void W(int a){
//    std::cout << "This is a static function\t" << a;
//}

int main()
{
//    static int j = 8;
//    int (*pok_na_fun)(int, int);
//    pok_na_fun = [](int a, int b){std::cout << k++ << std::endl; j++; return (a + b);};
//
//    pok_na_fun(2,3);
//
//    std::cout << j;
    fun1(5);
    return 0;
}
