#include <iostream>
#include <vector>
#include <list>
#include <cstdio>
#include <cstring>
#include <algorithm>
#include <set>


/* zadatak 1
void SortirajRecenice(char *recenica[], int br_recenica){

    for(int i(0); i<br_recenica; i++){
        for(int j(i+1); j<br_recenica; j++){
            char temp[1000];
            if(strcmp(recenica[i], recenica[j]) > 0){

                strcpy(temp, recenica[i]);
                strcpy(recenica[i], recenica[j]);
                strcpy(recenica[j], temp);
            }
        }
    }
}*/

/*zadatak 2
template<typename NekiTip>
std::list<NekiTip> SortirajListu(std::list<NekiTip>lista){
    typename std::list<NekiTip>::iterator it1, it2;
    for(it1 = lista.begin(); it1!=lista.end(); it1++){
        for(it2 = it1; it2!=lista.end(); it2++){
            if(it1 == it2)continue;
            NekiTip temp;
            if(*it1 > *it2){
                temp = *it1;
                *it1 = *it2;
                *it2 = temp;
            }
        }
    }
    return lista;
}*/

/*zadatak 3

template <typename NekiTip>
std::set<NekiTip> Unija(std::set<NekiTip>skup1, std::set<NekiTip>skup2){
    for(NekiTip x: skup2) skup1.insert(x);
    return skup1;
}

template <typename NekiTip>
std::set<NekiTip> Presjek(std::set<NekiTip>skup1, std::set<NekiTip>skup2){
    std::set<NekiTip>skup;
    for(NekiTip x: skup1){
        for(NekiTip y: skup2){
            if(x == y)skup.insert(x);
        }
    }
    return skup;
}*/

int main()
{
    /*zadatak 1
    int br_recenica;
    std::cin >> br_recenica;
    std::cin.ignore(10000, '\n');

    char *recenica[br_recenica];

    for(int i(0); i<br_recenica; i++){
        char recen[1000];
        std::cin.getline(recen, sizeof recen);

        recenica[i] = new char[strlen(recen) + 1];
        strcpy(recenica[i],recen);
    }

    //SortirajRecenice(recenica, br_recenica);

    std::sort(recenica, recenica + br_recenica, [](char a[], char b[]){return strcmp(a, b) < 0;});

    for(int i(0); i < br_recenica; i++)
    std::cout << recenica[i] << std::endl;
    */
    /*
    std::list<int>lista{1, 5, 4, 9, 5, 7, 2};
    lista = SortirajListu(lista);
    for(int x: lista)std::cout << x << " ";
*/
/*  zadatak 3
    std::set<int> s1{5,4,6,7,8,1}, s2{3,2,1,4,5,2}, su, sp;
    su = Unija(s1, s2);
    sp = Presjek(s1, s2);

    //for(int x: su)std::cout << x << " ";
    for(int x: sp)std::cout << x << " ";
*/


    return 0;
}
