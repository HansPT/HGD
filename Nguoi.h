#ifndef __NGUOI__
#define __NGUOI__

// #include "HoGiaDinh.h"
#include <string>

class Nguoi 
{
private:
    std::string m_Name;
    unsigned int m_age{0};
    std::string m_job;
    std::string m_ID;

public:
    void setName(std::string& name);
    std::string getName();
    void setAge(unsigned int& age);
    int getAge();
    void setJob(std::string& job);
    std::string getJob();
    void setID(std::string& id);
    std::string getID();
    void NguoiPrint();

    Nguoi( std::string name, unsigned int age, std::string job, std::string id);
    Nguoi();
    ~Nguoi();
};



#endif