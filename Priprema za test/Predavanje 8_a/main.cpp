#include <iostream>

//using namespace std;

struct Vector3d{
    double x, y, z;
};

void UnesiVector(Vector3d &v){
    std:: cout << "X = "; std::cin >> v.x;
    std:: cout << "Y = "; std::cin >> v.y;
    std:: cout << "Z = "; std::cin >> v.z;
}

int main()
{
    //Vector3d v1;
    //UnesiVector(v1);
    char auth[50];
    std::cin.getline(auth, sizeof auth, '.');
    //std::cin.ignore(1000, '\n');

    //std::cout << v1.x << ", " << v1.y << ", " << v1.z << std::endl;
    return 0;
}
