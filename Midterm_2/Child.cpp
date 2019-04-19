#include "pch.h"
#include "Child.h"


Child::Child() : Human("", 0, '/') {
	m_allowance = 0; 
}

Child::Child(std::string name, int age, char sex, std::string momName, std::string dadName) 
	: Human(name, age, sex) {
	m_momName = momName; 
	m_dadName = dadName; 
	m_allowance = 0; 
}

int Child::getAllowance() {
	std::cout << "This Child has an allowance of: " << m_allowance << "\n"; 
	return m_allowance; 
}
void Child::printParent() {
	std::cout << "The Mother of this Child is called: " << m_momName <<
		"  The Father of this Child is called: " << m_dadName << "\n"; 
}