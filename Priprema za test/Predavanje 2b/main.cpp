#include <iostream>
#include <vector>

//using namespace std;

std::vector<double> ZbirVektora(std::vector<double>v1, std::vector<double>v2){
    std::vector<double>v3;
    double suma(0);
    for(int i(0); i<v1.size(); i++)v3.push_back(v1[i]+v2[i]);
    return v3;
}

std::vector<int> operator +(std::vector<int> a, std::vector<int> b) {
    std::vector<int> c;
    for(int i = 0; i < a.size(); i++) c.push_back(a[i] + b[i]);
    return c;
}

int main()
{
    std::vector<double> v1{1,3,5,7,9}, v2{2,4,6,8,10};
//    std::vector<double> v3{ZbirVektora(v1, v2)};

    for(int i(0); i<v1.size(); i++)std::cout << v3[i] << ", " << std::endl;

//    operator+(v1, v2);



    return 0;
}
