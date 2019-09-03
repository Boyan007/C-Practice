#include <iostream>

//using namespace std;

void RazmijeniPokazivace(double *&x, double *&y) {
    double *pomocna(x);
    x = y; y = pomocna;
}

int main()
{
    typedef int NizTip[3]; // NizTip je sad tip niza od 3 int-a
    typedef int *PokTip; // PokTip je sad tip pokazivača na int

    NizTip niz; // Ovo je sad isto što i int niz[3];
    PokTip pok; // Ovo je sad isto što i int *pok;

    NizTip niz_nizova[5]; // Isto što i int niz_nizova[5][3]; niz_nizova sa 5 elemenata koji su NizTip
    PokTip niz_pok[10]; // Niz od 10 pokazivača na int; niz_pok sa 10 elemenata koji su pokTip
    //*array_of_pointers[ARRAY_SIZE];
    NizTip *pok_na_niz; // Pokazivač na niz od 3 int-a; pokazivac koji pokazuje na tip NizTip
    //(*ptr)[10];
    PokTip *pok_na_pok; // Pokazivač na pokazivač na int; pokazivac koji pokazuje na PokTip

    int *niz_pok[10]; // Niz od 10 pokazivača na int
    int (*pok_na_niz)[3]; // Pokazivač na niz od 3 int-a
    int **pok_na_pok; // Pokazivač na pokazivač na int

    int *f(double); // f je funkcija koja prima double a vraća pok. na int
    int (*pf)(double); // pf je pok. na funkciju koja prima double a vraća int

    typedef int *PokTip;
    PokTip *a(new PokTip[n]); // a je pokazivač na pokazivač
    for(int i = 0; i < n; i++) a[i] = new int[m];

    int **a(new int*[n]); // a je pokazivač na pokazivač
    for(int i = 0; i < n; i++) a[i] = new int[m];

    int *&ref_na_pok(pok); // ovdje je pok neka pokazivačka promjenljiva
    //“ref_na_pok” ponaša kao alternativno ime za pokazivačku promjenljivu “pok”
    int &*ref_na_pok(pok); // pokazivac na referencu - nije dozvoljeno


    RazmijeniPokazivace(&p1, &p2);

    try {
        double **a(new double*[n]);
        for(int i = 0; i < n; i++) a[i] = nullptr; // C++11!
        try {
            for(int i = 0; i < n; i++) a[i] = new double[m];
        }
        catch(...) {
            for(int i = 0; i < n; i++) delete[] a[i];
            delete[] a;
            throw;
        }
    }
    catch(...){
        std::cout << "Problemi sa memorijom!\n";
    }


    return 0;
}
