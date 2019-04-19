#pragma once
#include <iostream>
#include <string>

class Human{

private: 
	std::string m_name; 
	int m_age; 
	char m_sex; 
	Human();

protected:
	Human(std::string name, int age, char sex);
	~Human();

public:
	
	std::string getName();
	void setName(std::string name); 
	int getAge();
	void setAge(int age);
	char getSex();
	void setSex(char sex);

};

