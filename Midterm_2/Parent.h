#pragma once
#include "Human.h" 
#include "Child.h" 
#include <vector>

class Parent : public Human{

private:
	std::vector<std::string> m_children; 
	Parent();

public:
	Parent(std::string name, int age, char sex);
	void printChild(); 
	void setChild(Child child); 
	void setChildAllowance(int allowance, Child &child); 
};

