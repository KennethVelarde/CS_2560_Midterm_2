#include "pch.h"
#include "Parent.h"


Parent::Parent() : Human("", 0, '/'){

}

Parent::Parent(std::string name, int age, char sex) : Human(name,age,sex) {

}
void Parent::printChild() {
	if (m_children.empty()) return;
	for (std::string &i : m_children) std::cout << i << " ";
		std::cout << std::endl;
}
void Parent::setChild(Child child) {
	//std::string child_name = ;
	m_children.push_back(child.getName());
}
void Parent::setChildAllowance(int allowance, Child &child) {
	child.m_allowance = allowance;
}