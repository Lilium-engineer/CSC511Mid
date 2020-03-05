//class Student:It is like Person plus string major.It has the methods: constructor, (overridden) print(), getMajor().
//Published by Yirui Wang
//Reference: https://s3.amazonaws.com/itu.ems.production/attachments/000/516/912/original/program11.txt?1582332465  --from ITU CSC511 resources

#include <iostream>
#include "Person.h"

class Student:public Person {
public:
    Student();
    Student(const std::string &name, const std::string &age, const std::string &major):Person(name, age)
    {
        this->major = major;
    }

    Student(Student&);

    const std::string &getMajor()
    {
        return major;
    }

    virtual void print() 
    {
	Person::print();
	std::string M = "    Major:" + getMajor ();
        std::cout << M << std::endl;
    }

private:
    std::string major;
};
