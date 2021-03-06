#include "Person.hpp"
#include <iostream>

using std::cout;
using std::endl;

void Person::set_second_name(const string& s_name) {

	second_name = s_name;

	return;
}

void Person::set_first_name(const string& f_name) {

	first_name = f_name;

	return;
}

void Person::set_patronymic(const string& patron) {

	patronymic = patron;

	return;
}

void Person::set_address(const string& town) {

	address = town;

	return;
}

void Person::set_sex(const char& m_or_f) {

	sex = m_or_f;

	return;
}

void Person::set_education(const string& edu) {

	education = edu;

	return;
}

void Person::set_birth_year(const int& birth_year) {

	year_of_birth = birth_year;

	return;
}

Person& Person::operator=(const Person& aPerson) {

	second_name = aPerson.second_name;
	first_name = aPerson.get_first_name();
	patronymic = aPerson.get_patronymic();
	address = aPerson.get_address();
	sex = aPerson.get_sex();
	education = aPerson.get_education();
	year_of_birth = aPerson.get_birth_year();

	return *this;
}

string Person::get_second_name() const {

	return second_name;
}
	

string Person::get_first_name() const {

	return first_name;
}

string Person::get_patronymic() const {

	return patronymic;
}

string Person::get_address() const {

	return address;
}

char Person::get_sex() const {

	return sex;
}
		
string Person::get_education() const {

	return education;
}

int Person::get_birth_year() const {

	return year_of_birth;
}

void Person::show() const {

	cout << second_name + ' ' +  first_name + ' ' + patronymic
		<< endl;

	return;
}
