#ifndef __HOGIADINH__
#define __HOGIADINH__
#include "Nguoi.h"
#include <string>
#include <vector>

class HoGiaDinh
{
private: 
    std::string m_HouseNumber;
    unsigned int m_FamilyMember;
    std::vector<Nguoi> m_Human;
    // static Nguoi i;
public:
    void setHouseNumber( std::string& houseNumber);
    std::string getHouseNumber();
    void setFamilyMember(unsigned int& member);
    unsigned int getFamilyMember();
    void HGDprint();


    HoGiaDinh();
    HoGiaDinh(std::string houseNumber, unsigned int familyMember, std::vector<Nguoi> human);
    ~HoGiaDinh();
};



#endif