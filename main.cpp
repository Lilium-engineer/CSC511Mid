#include <iostream>
#include <string>
#include <fstream>
#include "PhDStudent.h"
int main()
{ 
	Student * S[0];
	int i;
	std::string name,age,major,thesis,dissertation;
	std::ifstream data("hw1per.txt");
	for(i=0;i<10;i++)
	{
		data >> name >> age >> major >> thesis >> dissertation;
		if(name !=""){
		if(thesis==""){
		S[i]= new Student(name, age, major);
		S[i]->print();}
		if(dissertation==""){
		S[i]= new GradStudent(name, age, major, thesis);
		S[i]->print();}
		else{
		S[i]= new PhDStudent(name, age, major, thesis, dissertation );
		S[i]->print();
		}
		}
		else{break;}
		
	}

}
