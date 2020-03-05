//class GradStudent:Like Student, plus string thesis.It has the methods: constructor, (overridden) print(), getThesis().
//Published by Yirui Wang
//Reference: https://s3.amazonaws.com/itu.ems.production/attachments/000/516/912/original/program11.txt?1582332465  --from ITU CSC511 resources

#include <iostream>
#include "Student.h"

class GradStudent:public Student {
public:
    GradStudent();
    GradStudent(const std::string &name, const std::string &age, const std::string &major, const std::string &thesis ):Student(name, age, major)
    {
        this->thesis = thesis;
    }

    GradStudent(GradStudent&);

    const std::string &getThesis()
    {
        return thesis;
    }

    virtual void print() 
    {
	Student::print();
	std::string T = "    Thesis:" + getThesis ();
        std::cout << T << std::endl;
    }

private:
    std::string thesis;
};
