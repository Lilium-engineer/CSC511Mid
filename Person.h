//class Person serves as the base class as shown above. 
//It has the data: name, age.
//It has the methods: constructor(), getName(), getAge(), virtual void print().
//Published by Yirui Wang 
//Reference:http://www.cplusplus.com/forum/general/191841/           --Bdanielz

#include <iostream>

class Person {
public:
    Person();
    Person(const std::string &name,const std::string &age)
    {
        this->name = name;
        this->age = age;
    }

    Person(Person&);


    const std::string &getName()
    {
        return name;
    }

    const std::string &getAge()
    {
        return age;
    }

    virtual void print() 
    {
        std::string N = "Name: " + getName ();
	std::string A = "    Age:" + getAge ();
        std::cout << N << A << std::endl;
    }

private:
    std::string name;
    std::string age;
};
