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
