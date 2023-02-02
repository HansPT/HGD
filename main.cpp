#include"Nguoi.h"
#include "KhuPho.h"
#include "HoGiaDinh.h"
#include <iostream>

#define ADD  1
#define SHOW 2
#define EXIT 3

int main()
{
    KhuPho* KP = new KhuPho();
    int number{0};
    while (true)
    {
        std::cout << "********************************\n";
        std::cout << "1.Add HoDan\n";
        std::cout << "2.Show HoDan\n";
        std::cout << "3.Exit\n";
        std::cout << "Enter number: ";
        std::cin >> number;
        std::cout << "********************************\n";
        switch (number)
        {
        case ADD:
        {
            int add{0};
            std::cout << "How many HoDan to add:";
            std::cin >> add;
            std::vector<Nguoi>HumanList;
            for (unsigned int i = 1; i <= add; i++)
            {
                std::cout << "Type HoDan: " << i << '\n';
                std::cout << "Type house number: ";
                std::string houseNumber;
                std::cin >> houseNumber;
                std::cout << "Type number family member: ";
                unsigned int familyMember{0};
                std::cin >> familyMember;
                for (unsigned int j = 1; j <= familyMember; j++)
                {
                    std::string name;
                    std::cout << "Type name " << j << " :";
                    std::cin >> name;
                    int age{0};
                    std::cout << "Type Age: ";
                    std::cin >> age;
                    std::string job;
                    std::cout << "Type Job: ";
                    std::cin >> job;
                    std::string ID;
                    std::cout << "Type ID: ";
                    std::cin >> ID;
                    HumanList.push_back(Nguoi(name,age,job,ID));
                }
                KP->addHoGiaDinh(HoGiaDinh(houseNumber,familyMember));
                // KP->print();
                
            }
            
        }
        KP->KhuPhoprint();
            break;
        case SHOW:
        {
            KP->KhuPhoprint();
        }
            break;
        default:
            break;
        }

    }
    

    return 0;
}