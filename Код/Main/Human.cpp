#include "Human.h"
#include <iostream>

void Human::set_name(const std::string& new_name)						// указать имя
{
	if (new_name != "")
		this->name = new_name;
	else
		throw std::invalid_argument("Invalid argument");
}

void Human::set_secondname(const std::string& new_secondname)			// указать фамилию
{
	if (new_secondname != "")
		this->secondname = new_secondname;
	else
		throw std::invalid_argument("Invalid argument");
}

void Human::set_lastname(const std::string& new_lastname)				// указать отчество
{
	if (new_lastname != "")
		this->lastname = new_lastname;
	else
		throw std::invalid_argument("Инвалидный аргумент");
}

void Human::set_date_of_birth(Date new_date_of_birth)					// указать дату рождения
{
	this->date_of_birth = new_date_of_birth;
}

void Human::set_date_of_birth(int new_year, int new_month, int new_day)	// указать дату рождения
{
	this->date_of_birth.set_date_day(new_day);
	this->date_of_birth.set_date_month(new_month);
	this->date_of_birth.set_date_year(new_year);
}

std::string Human::get_name() const										// получить имя
{
	return this->name;
}

std::string Human::get_secondname() const								// получить фамилию
{
	return this->secondname;
}

std::string Human::get_lastname() const									// получить отчество
{
	return this->lastname;
}

Date Human::get_date_of_birth() const									// получить дату рождения
{
	return this->date_of_birth;
}

Human::Human()															// конст. по умолч.
{
	Date();
	this->name = "Иван";
	this->secondname = "Иванов";
	this->lastname = "Иванович";
}

Human::Human(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)			// конст. с параметрами
{
	set_props(new_name, new_secondname, new_lastname, new_date_of_birth);
}

void Human::set_props(const std::string& new_name, const std::string& new_secondname, const std::string& new_lastname, Date new_date_of_birth)	// указать все значения
{
	set_name(new_name);
	set_secondname(new_secondname);
	set_lastname(new_lastname);
	set_date_of_birth(new_date_of_birth);
}

std::string Human::get_string()											// получить все значени строку
{
	std::string str;
	return str =
		"Имя: " + this->name + "\n" +
		"Фамилия: " + this->secondname + "\n" +
		"Отчество: " + this->lastname + "\n" +
		"Дата рождения: " + date_of_birth.get_string() + "\n";
}