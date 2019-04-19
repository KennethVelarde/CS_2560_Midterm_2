#include "pch.h"
#include <iostream>
#include "Parent.h"
#include "Child.h"

void printInfo(Human &human) {
	std::cout << "Person's Name: " << human.getName() << ", Person's Age: "
		<< human.getAge() << ", Persons's Sex: " << human.getSex() << "\n"; 
}


int main(){
	Parent homer = Parent("Homer", 36, 'M');
	Parent march = Parent("March", 34, 'F');
	Child lisa = Child("Lisa", 12, 'F', "March", "Homer");
	Child bart = Child("Bart", 10, 'M', "March", "Homer");
	Child maggie = Child("Maggie", 3, 'F', "March", "Homer");

	homer.setChild(lisa);
	homer.setChild(bart);
	homer.setChild(maggie);
	march.setChild(lisa);
	march.setChild(bart);
	march.setChild(maggie);

	bart.getAllowance(); 
	homer.setChildAllowance(5, bart);
	bart.getAllowance();

	bart.printParent(); 

	printInfo(march); 
	printInfo(lisa); 
}