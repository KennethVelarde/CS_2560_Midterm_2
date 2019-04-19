#pragma once
#include "Human.h"

class Child : public Human {

private: 
	std::string m_momName; 
	std::string m_dadName; 
	int m_allowance;
	Child();


public:
	Child(std::string name, int age, char sex, std::string momName, std::string dadName);
	int getAllowance(); 
	void printParent(); 

	friend class Parent;
};



