#include <iostream>
#include <queue>
#include <memory>
//#include "myCalc.h"

//using namespace std;

class Tocka{
    int x,y;
    static int cnt;
public:
    Tocka(){}
    Tocka(int a, int b): x(a), y(b){}
    int getX()const {return x;}
    static void Print(int a){std::cout << "cnt =  " << cnt << std::endl;}
};
int Tocka::cnt = 6;

/*class Tocka{
    int x, y;
public:
    Tocka():x(0), y(0){}
    Tocka(int a, int b):x(a), y(b){}
    void Print()const{std::cout << "x = " << x << "\ny = " << y;}
};

class TockaFactory{
public:
    static Tocka * napraviTocku(int a, int b){
        Tocka *t = new Tocka(a, b);
        return t;
    }
};*/



int main()
{
    //Tocka *f = TockaFactory::napraviTocku(4, 5);
    //f->Print();
    //cout << PI << endl;

/*    BST* B = new BST();

    B->Insert(5);
    B->Insert(3);
    B->Insert(10);    //B.addRight(8);
    B->Insert(20);
    B->Insert(7);
    B->Insert(30);
    B->Insert(15);

    B->PrintElements(B->getRoot());
    Heap H(15);
    try{
        H.Insert(2);
        H.Insert(7);
        H.Insert(8);
        H.Insert(2);
        H.Insert(10);
        H.Insert(4);
        H.Insert(5);
        H.Insert(1);
        H.Insert(8);
    }
    catch(std::domain_error e){std::cout << e.what() << std::endl;}

    H.writeOut();

    H.Remove(1);

    std::cout << std::endl << std::endl;

    H.writeOut();
*/
//    int a(5), b(3), c;
//    std::cout << (a<b ? "True" : "False");

    Tocka t(2, 3);
    Tocka::Print(7);
    return 0;
}
