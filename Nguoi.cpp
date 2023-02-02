#include "Nguoi.h"
#include <iostream>

void Nguoi::setName(std::string& name)
{
    m_Name = name;
}

std::string Nguoi::getName()
{
    return m_Name;
}

void Nguoi::setAge(unsigned int& age)
{
    if (age < 0)
    {
        m_age  = 1;
    }
    else
    {
        m_age = age;
    }
}

int Nguoi::getAge()
{
    return m_age;
}

void Nguoi::setJob(std::string& job)
{
    m_job = job;
}

std::string Nguoi::getJob()
{
    return m_job;
}

void Nguoi::setID(std::string& id)
{
    m_ID = id;
}

std::string Nguoi::getID()
{
    return m_ID;
}

void Nguoi::NguoiPrint()
{
    std::cout << "********************************\n";
    std::cout << " Name: " << m_Name << '\n';
    std::cout << " Age: " << m_age << '\n';
    std::cout << " Job: " << m_job << '\n';
    std::cout << " ID: " << m_ID << '\n';
}



Nguoi::Nguoi(std::string name, unsigned int age, std::string job, std::string id)

{
    this->setName(name);
    this->setJob(job);
    this->setID(id);
    this->setAge(age);
}

Nguoi::Nguoi() = default;
Nguoi::~Nguoi() = default;