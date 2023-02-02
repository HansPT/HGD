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
    std::cout << "size:" << m_Human.size() << '\n';
    for (Nguoi hum : m_Human)
    {
        /* code */
        hum.NguoiPrint();
    }
}



HoGiaDinh::HoGiaDinh() = default;

HoGiaDinh::HoGiaDinh(std::string houseNumber, unsigned int familyMember, std::vector<Nguoi> human)
{
    this->setFamilyMember(familyMember);
    this->setHouseNumber(houseNumber);
    m_Human = human;
}
HoGiaDinh::~HoGiaDinh() = default;
