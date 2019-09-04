#include <iostream>
#include <iomanip>
#include <vector>
/*
typedef std::vector<std::vector<double>> Matrica;
// Kreira matricu sa zadanim brojem redova i kolona
Matrica KreirajMatricu(int br_redova, int br_kolona) {
    return Matrica(br_redova, std::vector<double>(br_kolona));
}
// Vraca broj redova zadane matrice
int BrojRedova(Matrica m) {
    return m.size();
}
// Vraca broj kolona zadane matrice
int BrojKolona(Matrica m) {
    return m[0].size();
}
// Unosi sa tastature matricu sa zadanim brojem redova i kolona i
// vraca je kao rezultat
Matrica UnesiMatricu(int br_redova, int br_kolona) {
    auto m(KreirajMatricu(br_redova, br_kolona));
    for(int i = 0; i < br_redova; i++)
        for(int j = 0; j < br_kolona; j++) {
            std::cout << "Element (" << i + 1 << "," << j + 1 << "): ";
            std::cin >> m[i][j];
        }
    return m;
}
// Ispisuje zadanu matricu
/*void IspisiMatricu(Matrica m) {
    for(int i = 0; i < BrojRedova(m); i++) {
        for(int j = 0; j < BrojKolona(m); j++)
            std::cout << std::setw(10) << m[i][j];
        std::cout << std::endl;
    }
}*//*
void IspisiMatricu(Matrica m) {
    for(std::vector<double> red : m) {
        for(auto x : red) std::cout << std::setw(10) << x;
            std::cout << std::endl;
    }
}
// Testira da li su dvije matrice saglasne za sabiranje
bool MoguSeSabirati(Matrica m1, Matrica m2) {
    return (BrojRedova(m1) == BrojRedova(m2))&& (BrojKolona(m1) == BrojKolona(m2));
}
// Vraca zbir zadanih matrica, uz pretpostavku da se mogu sabirati
Matrica SaberiMatrice(Matrica m1, Matrica m2) {
    auto m3(KreirajMatricu(BrojRedova(m1), BrojKolona(m1)));
    for(int i = 0; i < BrojRedova(m1); i++)
        for(int j = 0; j < BrojKolona(m1); j++)
            m3[i][j] = m1[i][j] + m2[i][j];
    return m3;
}
// Testira da li su dvije matrice saglasne za mnozenje
bool MoguSeMnoziti(Matrica m1, Matrica m2) {
    return BrojKolona(m1) == BrojRedova(m2);
}
// Vraca produkt zadanih matrica, uz pretpostavku da se mogu množiti
Matrica PomnoziMatrice(Matrica m1, Matrica m2) {
    auto m3(KreirajMatricu(BrojRedova(m1), BrojKolona(m2)));
    for(int i = 0; i < BrojRedova(m1); i++)
        for(int j = 0; j < BrojKolona(m2); j++) {
            double suma(0);
            for(int k = 0; k < BrojRedova(m2); k++) suma += m1[i][k] * m2[k][j];
            m3[i][j] = suma;
        }
    return m3;
}*/

typedef std::vector<std::vector<double>> Matrica;

Matrica KreirajMatricu(int redovi,int kolone){
    return Matrica(redovi, std::vector<double>(kolone));
}

int BrojRedova(Matrica a){
    return a.size();
}

int BrojKolona(Matrica a){
    return a[0].size();
}

Matrica UnesiMatricu(int redovi, int kolone){
    auto m(KreirajMatricu(redovi, kolone));
    for(int i(0); i<BrojRedova(m); i++){
        for(int j(0); j<BrojKolona(m); j++){
            std::cin >> m[i][j];
        }
    }
    return m;
}

/*void IspisiMatricu(Matrica a){
    for(int i(0); i<a.size(); i++){
        for(int j(0); j<a[i].size();j++){
            std::cout << a[i][j] << " ";
        }
        std::cout << std::endl;
    }
}*/

void IspisiMatricu(Matrica a){
    for(std::vector<double> i: a){
        for(auto j: i){
            std::cout << j << " ";
        }
        std::cout << std::endl;
    }


}

// Glavni program
int main() {
    /*int m1, n1;
    std::cout << "Unesi dimenzije matrice A: ";
    std::cin >> m1 >> n1;
    std::cout << "Unesi elemente matrice A:\n";
    auto A(UnesiMatricu(m1, n1));

    int m2, n2;
    std::cout << "Unesi dimenzije matrice B: ";
    std::cin >> m2 >> n2;
    std::cout << "Unesi elemente matrice B:\n";
    auto B(UnesiMatricu(m2, n2));

    std::cout << "Matrica A:\n";
    IspisiMatricu(A);

    std::cout << "Matrica B:\n";
    IspisiMatricu(B);

    if(MoguSeSabirati(A, B)) {
        std::cout << "Matrica A+B:\n";
        IspisiMatricu(SaberiMatrice(A, B));
    }
    else std::cout << "Matrice nisu saglasne za sabiranje!\n";

    if(MoguSeMnoziti(A, B)) {
        std::cout << "Matrica A*B:\n";
        IspisiMatricu(PomnoziMatrice(A, B));
    }
    else std::cout << "Matrice nisu saglasne za mnozenje!\n";*/
/*
    int broj;
    char tekst[100];
    std::cout << "Unesi broj: ";
    std::cin >> broj;
    std::cin.ignore(10000, '\n');
    std::cout << "Unesi tekst: ";
    std::cin.getline(tekst, sizeof tekst);
    std::cout << "\nBroj: " << broj << "Tekst: " << tekst << std::endl;
*/
//////    int broj;
//////    char tekst[100];
//////    std::cout << "Unesi broj: ";
//////    std::cin >> broj >> std::ws;
//////    std::cout << "Unesi tekst: ";
//////    std::cin.getline(tekst, sizeof tekst);
//////    std::cout << "\nBroj: " << broj << "Tekst: " << tekst << std::endl;
    //Matrica a(KreirajMatricu(3, 5));
//////    auto a = UnesiMatricu(2, 3);
//////    IspisiMatricu(a);

//    char rec[10], rec1[10];
//    std::cin.getline(rec, sizeof rec);
//
//    std::cout << rec << std::endl;
//
//    std::cin.clear();
//    //std::cin.ignore(10000, '\n');
//
//    std::cin.getline(rec1, sizeof rec1);
//    std::cout << rec1;
//
//    char recenica[100];
//    std::cout << "Unesi neku rečenicu: ";
//    std::cin >> std::setw(sizeof recenica) >> recenica; // do prvog razmaka
//    std::cout << "Unesena rečenica glasi: " << recenica;



    return 0;
}
