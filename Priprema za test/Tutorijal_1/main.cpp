#include <iostream>
#include <cmath>
#include <iomanip>

//using namespace std;

int main()
{
//    const double pi = 4 * std::atan(1);

    std::cout << sizeof(bool);

    int var;
    std::cout << "Unesite broj zadatka: ";
    std::cin >> var;


    switch(var%4){
        case 0:
            {

            int A, B, C, a1, b1;

            std::cout << "Unesi dimenzije bazena (axbxc) u metrima: ";
            std::cin >> A >> B >> C;
            std::cin.ignore(10000, '\n');

            std::cout << "Unesi dimenzije plocice (axb) u centimetrima: ";
            std::cin >> a1 >> b1;
            std::cin.ignore(10000, '\n');

            std::cout << "Za poplocavanje bazena potrebno je " << (2*(A*C + B*C) + A*B)*10000./(a1*b1) << " plocica.";
            }
            break;

        case 1:
            {

            int a, b, c;

            std::cout << "Unesite tri broja: ";
            std::cin >> a >> b >> c;

            double s{(double)(a+b+c)/2}, P;
            P = std::sqrt(s*(s-a)*(s-b)*(s-c));

            std::cout << "Povrsina trougla iznosi: " << P;
            }

            break;

        case 2:
            {

            int broj{100};

            std::cout << "+" << std::setw(10) << std::setfill('-') << "+" << std::setw(11) << std::setfill('-') << "+" << std::setw(11) << std::setfill('-') << "+" << std::setfill(' ') << std::endl;
            std::cout << "|" << std::setw(8) << "Brojevi" << " | " << "Kvadrati" <<  " | " << "Korijeni " <<  "|" << std::endl;
            std::cout << "+" << std::setw(10) << std::setfill('-') << "+" << std::setw(11) << std::setfill('-') << "+" << std::setw(11) << std::setfill('-') << "+" << std::setfill(' ') << std::endl;

            for(int i(1); i<=broj; i++){
                std::cout << "| " << std::left << std::setw(8) << i << "| " << std::right << std::setw(8) << i << " | " << std::setw(8) << std::fixed << std::setprecision(3) << std::sqrt(i) << " |" << std::endl;
            }

            std::cout << "+" << std::setw(10) << std::setfill('-') << "+" << std::setw(11) << std::setfill('-') << "+" << std::setw(11) << std::setfill('-') << "+" << std::setfill(' ') << std::endl;
            }
            break;

        default:
            int n, sum{};

            std::cin >> n;

            for(int i(1); i<=n; i++){
                if(n%i==0)sum += i;
            }

            std::cout << sum;
    }


    return 0;
}
