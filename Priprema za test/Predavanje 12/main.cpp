#include <iostream>
//using namespace std;

class Vektor3d {
    double x, y, z;
public:
    Vektor3d(double x, double y, double z) : x(x), y(y), z(z) {}
    double DajX() const { return x; }
    double DajY() const { return y; }
    double DajZ() const { return z; }
    Vektor3d operator +(const Vektor3d &v) const;
    Vektor3d operator -() const { return {-x, -y, -z}; }
    Vektor3d operator +=(const Vektor3d &v);
};

Vektr3d Vektor3d::operator +=(const Vektor3d &v){
    x += v.x; y += v.y; z += v.z;
    return *this;
}

class VektorNd {
    int dimenzija;
    double *koordinate;
    void TestIndeksa(int indeks) const {
        if(indeks < 1 || indeks > dimenzija)
            throw std::range_error("Pogrešan indeks!");
    }
public:
    explicit VektorNd(int dimenzija);
    VektorNd(std::initalizer_list<double> lista);
    void PromijeniDimenziju(int nova_dimenzija);
    ~VektorNd() { delete[] koordinate; }
    VektorNd(const VektorNd &v);
    VektorNd(VektorNd &&v);
    VektorNd &operator =(const VektorNd &v);
    VektorNd &operator =(VektorNd &&v);
    double operator [](int indeks) const {
        TestIndeksa(indeks); return koordinate[indeks - 1];
    }
    double &operator [](int indeks) {
        TestIndeksa(indeks); return koordinate[indeks - 1];
    }
    double *begin() const { return koordinate; }
    double *end() const { return koordinate + dimenzija; }
    friend std::ostream &operator <<(std::ostream &tok, const VektorNd &v);
    friend VektorNd operator +(const VektorNd &v1, const VektorNd &v2);
    VektorNd operator +=(const VektorNd &v);
};

std::ostream &operator <<(std::ostream &tok, const VektorNd &v) {
    tok << "{";
    for(int i = 0; i < v.dimenzija - 1; i++) {
        tok << v.koordinate[i] << ",";
        if(i != v.dimenzija - 1)
            tok << ",";
    }
    return tok << "}";
}

VektorNd operator +(const VektorNd &v1, const VektorNd &v2) {
    if(v1.dimenzija != v2.dimenzija)
        throw std::domain_error("Nesaglasne dimenzije!");
    VektorNd v3(v1.dimenzija);
    for(int i = 0; i < v1.dimenzija; i++)
        v3.koordinate[i] = v1.koordinate[i] + v2.koordinate[i];
    return v3;
}

VektorNd &operator +=(const VektorNd &v) {
    if(dimenzija != v.dimenzija)
        throw std::domain_error("Nesaglasne dimenzije!");
    for(int i = 0; i < dimenzija; i++) koordinate[i] += v.koordinate[i];
    return *this;
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
