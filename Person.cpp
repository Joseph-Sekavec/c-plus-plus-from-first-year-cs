#include "Person.h"
#include <iostream>

Person::Person() : _firstname{ "jane" }, _lastname{ "doe" }, _dob{ "jan 1, 1970" }, _secret{}{}

Person::Person(std::string firstname, std::string lastname, std::string dob) : _firstname{firstname}, _lastname{lastname}, _dob{dob}, _secret{"a secret"}{}

void Person::print() const
{
	std::cout << "first name: " << _firstname << std::endl;
	std::cout << "last name: " << _lastname << std::endl;

}