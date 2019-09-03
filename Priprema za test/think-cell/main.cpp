#include <iostream>
#include <map>
#include <limits>
#include <vector>
#include <string>
#include <typeinfo>

template<typename K, typename V>

class interval_map {
	std::map<K,V> m_map;

    public:
    // constructor associates whole range of K with val by inserting (K_min, val)
    // into the map
        interval_map( V const& val) {
            m_map.insert(m_map.end(),std::make_pair(std::numeric_limits<K>::lowest(),val));
        }

    // Assign value val to interval [keyBegin, keyEnd).
    // Overwrite previous values in this interval.
    // Conforming to the C++ Standard Library conventions, the interval
    // includes keyBegin, but excludes keyEnd.
    // If !( keyBegin < keyEnd ), this designates an empty interval,
    // and assign must do nothing.
        /*if(!(keyBegin<keyEnd)) return; //it should not return anything


        for(auto k = m_map.find(keyBegin); k != m_map.find(keyEnd); k++){
            if((*(k-1)).second == val) continue;

            (*k).second = val;
        }*/

    // look-up of the value associated with key
        V const& operator[]( K const& key ) const {
            return ( --m_map.upper_bound(key) )->second;
        }
        char GetV() const {return m_map.begin()->second;}

        void Ispisi(){std::cout << m_map.begin()->first << ", " << m_map.begin()->second << std::endl;}
};
//template<typename K, typename V>
//std::map<K, V> stanovnistvo;

int main()
{
    /*std::vector<std::string> myvector;  // a vector of stings.


// push some strings in the vector.
    myvector.push_back("a");
    myvector.push_back("b");
    myvector.push_back("c");
    myvector.push_back("d");


    std::vector<std::string>::iterator it;  // declare an iterator to a vector of strings
    int n = 3;  // nth element to be found.
    int i = 0;  // counter.

    for(it = myvector.begin()+1; it != myvector.end(); it++) std::cout << *(it-1) << std::endl;
*/

    //interval_map<unsigned int, char> A[]{(0,'A'), (3,'B'), (5,'A')};


    //A = interval_map<int, char>(0,'A');

    //for(int i(0); i<3; i++)A[i].Ispisi();// << "\tSecond: " << p->second;
    //A.Ispisi();
    std::map<int, char> m_map;

    m_map.insert(m_map.end(), std::make_pair(0, 'A'));
    m_map.insert(m_map.end(), std::make_pair(1, 'A'));
    m_map.insert(m_map.end(), std::make_pair(2, 'A'));
    m_map.insert(m_map.end(), std::make_pair(3, 'A'));
    m_map.insert(m_map.end(), std::make_pair(4, 'A'));
    m_map.insert(m_map.end(), std::make_pair(5, 'A'));
    m_map.insert(m_map.end(), std::make_pair(6, 'A'));
    m_map.insert(m_map.end(), std::make_pair(7, 'A'));
    m_map.insert(m_map.end(), std::make_pair(8, 'A'));
    m_map.insert(m_map.end(), std::make_pair(9, 'A'));


    int keyBegin(0), keyEnd(5);
    char const val{'B'};//, val1{'D'};

    auto i{keyBegin};
    auto k{m_map.find(keyBegin)},k1{m_map.find(keyBegin)};
    k1--;

    if(k == m_map.begin() || k1->second != val){
        while(i++ < keyEnd){
            if(k->second != val)k->second = val;
            k++;
        }
    }

//I am not certain did I understand the exercise correctly
//I assume that in the m_map, every first member is smaller or bigger by 1, than the next or previous
//(so that the values don't have any in)


    //std :: cout << k->second == val << std::endl;//OVO NE RADI
    //std :: cout << (k->second == val) << std::endl;//OVO RADI

//    std::cout << k1->first << std::endl;


//    if(!(keyBegin<keyEnd)) return; //it should not return anything



    /*while(i++ < keyEnd){
        if(k == m_map.begin()){k++->second = val;continue;}
        k++;
        if((k1->second == val)){
            //std::cout << "1" << std::endl;
            k1++;
            continue;}

        //if(it->first > )

        m_map[i-1] = val;
    }*/

    for(auto it = m_map.begin(); it != m_map.end(); it++){

        std::cout << "Key: " << it->first << " Value: " << it->second << std::endl;

    }

    return 0;
}
