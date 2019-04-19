#include "pch.h"
#include "Human.h"


Human::Human(){

}

Human::Human(std::string name, int age, char sex) {
	m_name = name; 
	m_age = age; 
	m_sex = sex; 
}

Human::~Human(){
}

std::string Human::getName() {
	return m_name; 
}
void Human::setName(std::string name) {
	m_name = name; 
}
int Human::getAge() {
	return m_age; 
}
void Human::setAge(int age) {
	m_age = age; 
}
char Human::getSex() {
	return m_sex; 
}
void Human::setSex(char sex) {
	m_sex = sex; 
}
