#include <iostream>
#include <map>

//using namespace std;

int main()
{
    std::map<std::string, int> grad;
    grad = {{"Sarajevo", 450000},{"Banja Luka", 200000}, {"Mostar", 85000}};

    for(auto it(grad.begin()); it!=grad.end(); it++){
        std::cout << it->second << std::endl;
    }

    //std::cout << grad["Sarajevo"] << std::endl;
    return 0;
}
