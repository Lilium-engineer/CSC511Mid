//class PhDStudent: like GradStudent plus string dissertation. It has the methods: constructor, (overridden) print(), getDissertation().
//Published by Yirui Wang
//Reference: https://s3.amazonaws.com/itu.ems.production/attachments/000/516/912/original/program11.txt?1582332465  --from ITU CSC511 resources

#include <iostream>
#include "GradStudent.h"

class PhDStudent:public GradStudent {
public:
    PhDStudent();
    PhDStudent(const std::string &name, const std::string &age, const std::string &major, const std::string &thesis, const std::string &dissertation ):GradStudent(name, age, major, thesis)
    {
        this->dissertation  = dissertation;
    }

    PhDStudent(PhDStudent&);

    const std::string &getDissertation ()
    {
        return dissertation;
    }

    virtual void print() 
    {
	GradStudent::print();
	std::string D = "    Dissertation:" + getDissertation  ();
        std::cout << D << std::endl;
    }

private:
    std::string dissertation;
};
