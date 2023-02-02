#include "HoGiaDinh.h"
#include <iostream>

void HoGiaDinh::setHouseNumber( std::string& houseNumber)
{
    m_HouseNumber = houseNumber;
}

std::string HoGiaDinh::getHouseNumber()
{
    return m_HouseNumber;
}

void HoGiaDinh::setFamilyMember(unsigned int& member)
{
    m_FamilyMember = member;

}

unsigned int HoGiaDinh::getFamilyMember()
{
    return m_FamilyMember;
}

void HoGiaDinh::HGDprint()
{
    std::cout << "---------------------\n";
    std::cout << "House Number:" << m_HouseNumber << '\n';
    std::cout << "Family Member: " << m_FamilyMember << '\n';
    Nguoi a;
    for (unsigned int i = 0; i < m_Human.size(); i++)
    {
        /* code */
        a.NguoiPrint();
    }
    
    
}



HoGiaDinh::HoGiaDinh() = default;

HoGiaDinh::HoGiaDinh(std::string houseNumber, unsigned int familyMember)
{
    this->setFamilyMember(familyMember);
    this->setHouseNumber(houseNumber);
}
HoGiaDinh::~HoGiaDinh() = default;
