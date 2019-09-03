#include <iostream>

//using namespace std;

template <typename TipElemenata>
TipElemenata *StvoriNizPopunjenNulama(int n) {
    TipElemenata *pok(new TipElemenata[n]);
    for(int i = 0; i < n; i++) pok[i] = TipElemenata();
    return pok;
}
int main()
{
    auto /*moze i double ovdje*/ *dinamicki_niz(StvoriNizPopunjenNulama<double>(100)); // <double> je potreban jer se iz poziva ne moze zakljuciti TipElementa
    //auto zakljucuje tip podatka u zavisnosti od podatka koji mu se dodjeljuje, to jest, od ovog desno
    return 0;
}
