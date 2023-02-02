#ifndef __KHUPHO__
#define __KHUPHO__
#include <vector>
#include "HoGiaDinh.h"

class KhuPho
{
private:
    std::vector<HoGiaDinh> m_list;
public:
    void addHoGiaDinh(HoGiaDinh HGD);
    void KhuPhoprint();

    KhuPho();
    ~KhuPho();
};



#endif