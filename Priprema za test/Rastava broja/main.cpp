#include <iostream>
#include <cmath>
//using namespace std;
void RastavaBroja(int n, int &p, int &q){

    //int maxi(1);
    for(int i(1); i<n/2+1; i++){
        int temp;
        if(n%i==0){
            if(std::sqrt(n/i) == int(std::sqrt(n/i))){
                temp = n/i;
                p = i;
                q = sqrt(temp);
                return;
            }
        }
    }
    p = n;
    q = 1;
}

int main()
{
    int n, p, q;
    std::cin >> n;
    RastavaBroja(n, p, q);

    std::cout << "n = " << n << "\np = " << p << "\nq = " << q;

    return 0;
}
