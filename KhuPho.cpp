#include "KhuPho.h"
#include <iostream>

void KhuPho::addHoGiaDinh(HoGiaDinh HGD)
{
    m_list.push_back(HGD);
}


void KhuPho::KhuPhoprint()
{
    for (HoGiaDinh i : m_list)
    {
        i.HGDprint();
    }
    
}




KhuPho::KhuPho() = default;
KhuPho::~KhuPho() = default;